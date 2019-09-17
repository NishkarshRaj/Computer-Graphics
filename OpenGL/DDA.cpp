#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
glColor3f(0,1,0);
glBegin(GL_POINTS);
// DDA
	int a; //case counter
	float x1,x2,y1,y2; // Must be taken as integer for Computer graphics but accuracy decreases for integer due to round off.
	float m,temp1,temp2,c; //c is for intercept //m is for slope
	//printf("Simple DDA method\n");
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
		//printf("Case %d\n",a++);
		//printf("X: %f\n",x1);
		//printf("Y: %f\n",y1);
		//printf("\n\n");
		glVertex2i(x,y);
		while(x1<x2)
		{
			//p/rintf("Case %d\n",a++);
			x1 = x1 + 1;
			y1 = (m*x1) + c;
			//printf("X: %f\n",x1);
			y1 = (int)(y1+0.5); //Round Off Method!!!
			//printf("Y: %f\n",y1);
			//printf("\n\n");
			glVertex2i(x,y);
		}
	}
	else
	{
		a = 1;
		//printf("Case %d\n",a++);
		//printf("X: %f\n",x1);
		//printf("Y: %f\n",y1);
		//printf("\n\n");
		glVertex2i(x,y);
		while(y1<y2)
		{
			y1 = y1 + 1;
			x1 = (y1-c)/m;
			x1 = (int)(x1 + 0.5);
			//printf("X: %f\n",x1);
			//printf("Y: %f\n",y1);
			//printf("\n\n");
			glVertex2i(x,y);
		}
	}
	glEnd();
//Flush the whole window
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Hut");
init();
glutDisplayFunc(display);
glutMainLoop();
}
