#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
int Xc,Yc,r;
	int x,y,count,temp_int;
	float temp;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
///
	//Setting initial value
	glClear(GL_COLOR_BUFFER_BIT);
	x = Xc - r;
	y = Yc;
	glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (Xc+r))
	{
		x = x + 1;
		temp = sqrt(pow(r,2)-pow(x-Xc,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);

	}
glEnd();
glFlush();
}
//Keyboard Event
void event1(unsigned char key, int x, int y )
{
//overwrite Circle triangle with bg color
	x = Xc - r;
	y = Yc;
	glColor3f(0,0,1);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (Xc+r))
	{
		x = x + 1;
		temp = sqrt(pow(r,2)-pow(x-Xc,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);

	}
glEnd();
glFlush();
//////
if(key=='a')
{
	Xc=Xc-10;
}
if(key=='d')
{
	Xc=Xc+10;	
}
if(key=='w')
{
	Yc=Yc+10;
}
if(key=='s')
{
	Yc=Yc-10;
}
//Create new figure
	x = Xc - r;
	y = Yc;
	glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (Xc+r))
	{
		x = x + 1;
		temp = sqrt(pow(r,2)-pow(x-Xc,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
	}
glEnd();
glFlush();
}

///
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
glutCreateWindow("Final Exam B2");
init();
glutDisplayFunc(display);
glutKeyboardFunc(event1);
glutMainLoop();
}
