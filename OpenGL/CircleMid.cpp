#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
void display(void)
{
glColor3f(0,1,0);
glBegin(GL_POINTS);
	int Xc,Yc,r,x,y,count,p;
	cout<<"Scan conversion of Circle\n";
	cout<<"Enter the center of the circle co-ordinates\n";
	cout<<"Enter Xc: ";
	cin>>Xc;
	cout<<"Enter Yc: ";
	cin>>Yc;
	cout<<"Enter radius of the circle: ";
	cin>>r;
	//Setting initial values of x and y
	x = Xc;
	p = 1 - r; //Initial Decision Parameter
	cout<<"\n\n";
	count = 1;
glVertex2i(x,y);
glVertex2i(-x,y);
glVertex2i(x,-y);
glVertex2i(-x,-y);
glVertex2i(y,x);
glVertex2i(-y,x);
glVertex2i(y,-x);
glVertex2i(-y,-x);
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
glVertex2i(x,y);
glVertex2i(-x,y);
glVertex2i(x,-y);
glVertex2i(-x,-y);
glVertex2i(y,x);
glVertex2i(-y,x);
glVertex2i(y,-x);
glVertex2i(-y,-x);
	}
glEnd();
glFlush();
}
int main(int argc,char **argv,char **arg)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(700,700);
	glutInitWindowSize(500,500);
	glutCreateWindow("Circle Code");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}

