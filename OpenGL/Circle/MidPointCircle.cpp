#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
int Xc,Yc,r;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
///
	int x,y,p,xn,yn;
	//Setting initial values of x and y
	x = Xc;
	y = Yc + r;
	p = 1 - r; //Initial Decision Parameter
xn=2*Xc-x;
yn=2*Yc-y;
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,yn);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(xn,y);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(xn,yn);
glEnd();
glColor3f(0,1,0);
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(y,x);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(y,xn);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(yn,x);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(yn,xn);
glEnd();
glFlush();
	while(x<y)
	{
		x = x + 1;
		if(p<0)
		{
			// y remains the same
			p = p + (2*x) + 1;
		}		
		else if(p>0)
		{
			y = y - 1;
			p = p + (2*x) + 1 - (2*y);
		}
xn=2*Xc-x;
yn=2*Yc-y;
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,yn);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(xn,y);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(xn,yn);
glEnd();
glColor3f(0,1,0);
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(y,x);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(y,xn);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(yn,x);
glEnd();
glFlush();

glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(yn,xn);
glEnd();
glFlush();
	}	
}
int main(int argc,char **argv)
{
	cout<<"Scan conversion of Circle\n";
	cout<<"Enter the center of the circle co-ordinates\n";
	cout<<"Enter Xc: ";
	cin>>Xc;
	cout<<"Enter Yc: ";
	cin>>Yc;
	cout<<"Enter radius of the circle: ";
	cin>>r;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Mid Point Circle by Nishkarsh Raj");
init();
glutDisplayFunc(display);
glutMainLoop();
}
