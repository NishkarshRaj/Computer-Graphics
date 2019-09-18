#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
int rx,ry;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
/////////////////
	int c1,c2,x,y,p1,p2;
	c1 = 0;
	x = 0;
	y = ry;
	p1 = (ry*ry) - (rx*rx)*ry + ((rx*rx)/4);
	glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();
	while((ry*ry*x)<=(rx*rx*y))
	{
		x = x + 1;
		if(p1<0)
		{
			//y remains same
			p1 = p1 + (ry*ry) + 2*(ry*ry)*x;
		}
		else
		{
			y = y-1;
			p1 = p1 + (ry*ry*(2*x+1)) - 2*(rx*rx)*(y);
		}
			glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();
	}
	// Starting Region 2
	c2 = 0;
	p2 =  (ry*ry)*(x+0.5)*(x+0.5) + (rx*rx)*(y-1)*(y-1) - (rx*rx*ry*ry);
	glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();
	while((y>0)&&(x<=rx))
	{
		y = y-1;
		if(p2<0)
		{
			x = x + 1;
			p2 = p2 + (rx*rx)*(1-2*y) + 2*(ry*ry)*x;
		}
		else
		{
			p2 = p2 + (rx*rx)*(1-2*y);
		}
		glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();
	}
/////////////////
}
int main(int argc,char **argv)
{
	cout<<"Mid point Ellipse Algorithm"<<endl;
	cout<<"Enter rx: ";
	cin>>rx;
	cout<<"Enter ry: ";
	cin>>ry;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Mid Point Ellipse");
init();
glutDisplayFunc(display);
glutMainLoop();
}
