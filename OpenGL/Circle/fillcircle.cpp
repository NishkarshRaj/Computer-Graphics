#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
///
	int x,y,count,temp_int;
	float temp;
	//Setting initial value
	x = 350 - 100;
	y = 350;
	glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (450)) //xc +r
	{
		x = x + 1;
		temp = sqrt(pow(100,2)-pow(x-350,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
	}
glEnd();
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Polynomial Circle");
init();
glutDisplayFunc(display);
glutMainLoop();
}
