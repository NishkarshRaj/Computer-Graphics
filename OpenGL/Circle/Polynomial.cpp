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
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d();
glVertex2d();
glEnd();
glFlush();
///
	int x,y,count,temp_int;
	float temp;
	//Setting initial value
	x = Xc - r;
	y = Yc;
	count = 1;
	//cout<<"\n\n";
	//cout<<"Case "<<count++<<endl;
	//cout<<"Value of X: "<<x<<endl;
	//cout<<"Value of Y: "<<y<<endl;
	glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
glFlush();
	while(x < (Xc+r))
	{
		//cout<<"\n\n";
		x = x + 1;
		temp = sqrt(pow(r,2)-pow(x-Xc,2)); 
		//cout<<temp<<endl;
		//cout<<int(temp+0.5);
		temp_int = int(temp+0.5);
		//cout<<"Case "<<count++<<endl;
		//cout<<"Value of X: "<<x<<endl;
		//cout<<"Value of Y Top: "<<y+temp_int<<endl;	
		//cout<<"Value of Y Bottom:"<<y-temp_int;
		glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
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
glutCreateWindow("Polynomial Circle");
init();
glutDisplayFunc(display);
glutMainLoop();
}
