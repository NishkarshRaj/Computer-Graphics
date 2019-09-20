#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
int r;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
		int x,y,p;
	x=0; //x = xc
	y=r; //y = yc+r
	p = 3-2*r; //Initial Decision Parameter
	do
	{
		glColor3f(0,1,0);
		glBegin(GL_POINTS);
		glVertex2d(x,y);
		glEnd();
		glFlush();
	if(p<0)
	{
		p = p + 4*x + 6;
	}
	else
	{
		p = p + 4*x - 4*y + 10;
		y--;
	}
	x++;
	}while(x!=y);
	glColor3f(0,1,0);
		glBegin(GL_POINTS);
		glVertex2d(x,y);
		glEnd();
		glFlush();
}
int main(int argc,char **argv)
{
	cout<<"Enter the radius: ";
	cin>>r;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Bresenhams Circle");
init();
glutDisplayFunc(display);
glutMainLoop();
}
