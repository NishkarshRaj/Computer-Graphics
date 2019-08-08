#include<stdio.h>
int main()
{
	int a; //case counter
	float x1,x2,y1,y2; // Must be taken as integer for Computer graphics but accuracy decreases for integer due to round off.
	float m,temp1,temp2,c; //c is for intercept //m is for slope
	printf("Simple DDA method\n");
	printf("Enter first point co-ordinates\n");
	printf("x1: ");
	scanf("%f",&x1);
	printf("y1: ");
	scanf("%f",&y1);
	printf("Enter second point co-ordinates\n");
	printf("x2: ");
	scanf("%f",&x2);
	printf("y2: ");
	scanf("%f",&y2);
	temp1 = y2-y1;
	temp2 = x2-x1;
	m = temp1/temp2;
	printf("Slope: %f\n",m);
	c = y1 - x1*m;
	printf("Intercept: %f\n",c);
	if(m<=1)
	{
		a = 1;
		printf("Case %d\n",a++);
		printf("X: %f\n",x1);
		printf("Y: %f\n",y1);
		printf("\n\n");
		while(x1<x2)
		{
			printf("Case %d\n",a++);
			x1 = x1 + 1;
			y1 = (m*x1) + c;
			printf("X: %f\n",x1);
			y1 = (int)(y1+0.5); //Round Off Method!!!
			printf("Y: %f\n",y1);
			printf("\n\n");
		}
	}
	else
	{
		a = 1;
		printf("Case %d\n",a++);
		printf("X: %f\n",x1);
		printf("Y: %f\n",y1);
		printf("\n\n");
		while(y1<y2)
		{
			y1 = y1 + 1;
			x1 = (y1-c)/m;
			x1 = (int)(x1 + 0.5);
			printf("X: %f\n",x1);
			printf("Y: %f\n",y1);
			printf("\n\n");
		}
	}
	return 0;
}
