#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
float x1,x2,y2,y1;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
//////
	int a,p,t1,t2; //a is case counter //p is decision parameter
	//float x1,x2,y1,y2; // Must be taken as integer for Computer graphics but accuracy decreases for integer due to round off.
	float m,temp1,temp2; //m is for slope
	temp1 = y2-y1; //dy
	temp2 = x2-x1; //dx
	t1 = (int)(temp1);
	t2 = (int)(temp2);
	m = temp1/temp2;
	p = (2*t1) - t2;
	///printf("Slope: %f\n",m);
	//printf("Decision Parameter: %d\n",p);
	if(m<1)
	{
		a = 1;
		//printf("Case %d\n",a++);
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();
		while(x1<x2)
		{
			//printf("Case %d\n",a++);
			x1 = x1 + 1;
			//printf("X: %f\n",x1);
			if(p<0)
			{
				p = p + (2*t1);
				//printf("Y: %f\n",y1);
				//printf("Decision Parameter: %d\n",p);
				glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();
			}
			else if(p>=0)
			{
				p = p + (2*t1) - (2*t2);
				y1 = y1 + 1;
				//printf("Y: %f\n",y1);
				//printf("Decision Parameter: %d\n",p);
				glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();	
			}
		}
	}
	else
	{
		a = 1;
		//printf("Case %d\n",a++);
		//printf("X: %f\n",x1);
		//p/rintf("Y: %f\n",y1);
		glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();
		while(y1<y2)
		{
			//printf("Case %d\n",a++);
			y1 = y1 + 1;
			//printf("Y: %f\n",y1);
			if(p<0)
			{
				p = p + (2*t2);
				//printf("X: %f\n",x1);
				//printf("Decision Parameter: %d\n",p);
				glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();
			}
			else if(p>=0)
			{
				p = p -t1 + (2*t2);
				x1 = x1 + 1;
				//printf("X: %f\n",x1);
				//printf("Decision Parameter: %d\n",p);
				glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x1,y1);
glEnd();
glFlush();	
			}
		}	
	}
////
}
int main(int argc,char **argv)
{
		printf("Bresenham's Line Drawing Algorithm\n");
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
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Brensenham Line by NishkarshRaj");
init();
glutDisplayFunc(display);
glutMainLoop();
}
