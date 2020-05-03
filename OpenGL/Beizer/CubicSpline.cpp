#include<stdio.h>
#include<math.h>

void gaussEliminationLS(int m, int n, double a[m][n], double x[n-1]){
    int i,j,k;
    for(i=0;i<m-1;i++){

        for(k=i+1;k<m;k++){
            double  term=a[k][i]/ a[i][i];
            for(j=0;j<n;j++){
                a[k][j]=a[k][j]-term*a[i][j];
            }
        }

    }
    //Begin Back-substitution
    for(i=m-1;i>=0;i--){
        x[i]=a[i][n-1];
        for(j=i+1;j<n-1;j++){
            x[i]=x[i]-a[i][j]*x[j];
        }
        x[i]=x[i]/a[i][i];
    }
}
void cSCoeffCalc(int n, double h[n], double sig[n+1], double y[n+1], double a[n], double b[n], double c[n], double d[n]){
    int i;
    for(i=0;i<n;i++){
        d[i]=y[i];
        b[i]=sig[i]/2.0;
        a[i]=(sig[i+1]-sig[i])/(h[i]*6.0);
        c[i]=(y[i+1]-y[i])/h[i]-h[i]*(2*sig[i]+sig[i+1])/6.0;
    }
}

void tridiagonalCubicSplineGen(int n, double h[n], double a[n-1][n], double y[n+1]){
    int i;
    for(i=0;i<n-1;i++){
        a[i][i]=2*(h[i]+h[i+1]);
    }
    for(i=0;i<n-2;i++){
        a[i][i+1]=h[i+1];
        a[i+1][i]=h[i+1];
    }
    for(i=1;i<n;i++){
        a[i-1][n-1]=(y[i+1]-y[i])*6/(double)h[i]-(y[i]-y[i-1])*6/(double)h[i-1];
    }
}

void printMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%lf\t",matrix[i][j]);
        }
        printf("\n");
    }
}

void copyMatrix(int m, int n, double matrix1[m][n], double matrix2[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix2[i][j]=matrix1[i][j];
        }
    }
}
main(){
    int m,i;
    printf("Enter the no. of data-points:\n");
    scanf("%d",&m);
    int n=m-1;  //Now (n+1) is the total no. of data-points, following our convention
    double x[n+1]; //array to store the x-axis points
    double y[n+1]; //array to store the y-axis points
    double h[n];   ////array to store the successive interval widths
    printf("Enter the x-axis values:\n");
    for(i=0;i<n+1;i++){
        scanf("%lf",&x[i]);
    }
    printf("Enter the y-axis values:\n");
    for(i=0;i<n+1;i++){
        scanf("%lf",&y[i]);
    }
    for(i=0;i<n;i++){
        h[i]=x[i+1]-x[i];
    }
    double a[n]; //array to store the ai's
    double b[n]; //array to store the bi's
    double c[n]; //array to store the ci's
    double d[n]; //array to store the di's
    double sig[n+1]; //array to store Si's
    double sigTemp[n-1]; //array to store the Si's except S0 and Sn
    sig[0]=0;
    sig[n]=0;
    double tri[n-1][n]; //matrix to store the tridiagonal system of equations that will solve for Si's
    tridiagonalCubicSplineGen(n,h,tri,y); //to initialize tri[n-1][n]
    printf("The tridiagonal system for the Natural spline is:\n\n");
    printMatrix(n-1,n,tri);
    //Perform Gauss Elimination
    gaussEliminationLS(n-1,n,tri,sigTemp);
    for(i=1;i<n;i++){
        sig[i]=sigTemp[i-1];
    }
    //Print the values of Si's
    for(i=0;i<n+1;i++){
        printf("\nSig[%d] = %lf\n",i,sig[i]);
    }
    //calculate the values of ai's, bi's, ci's, and di's
    cSCoeffCalc(n,h,sig,y,a,b,c,d);
    printf("The equations of cubic interpolation polynomials between the successive intervals are:\n\n");
    for(i=0;i<n;i++){
        printf("P%d(x) b/w [%lf,%lf] = %lf*(x-%lf)^3+%lf*(x-%lf)^2+%lf*(x-%lf)+%lf\n",i,x[i],x[i+1],a[i],x[i],b[i],x[i],c[i],x[i],d[i]);
    }
    printf("Transformations-Yash Sharma");
}
