#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
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
//Lowermost Green Color Bottom Cover
//glColor3i(0,255,0); Does not work
glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(700,0);
glVertex2i(700,40);
glVertex2i(0,40);
glEnd();
//Black Road
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(0,40);
glVertex2i(700,40);
glVertex2i(700,200);
glVertex2i(0,200);
glEnd();
//White Patches on the Black Road
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(20,110);
glVertex2i(100,110);
glVertex2i(100,130);
glVertex2i(20,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(120,110);
glVertex2i(200,110);
glVertex2i(200,130);
glVertex2i(120,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(220,110);
glVertex2i(300,110);
glVertex2i(300,130);
glVertex2i(220,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(320,110);
glVertex2i(400,110);
glVertex2i(400,130);
glVertex2i(320,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(420,110);
glVertex2i(500,110);
glVertex2i(500,130);
glVertex2i(420,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(520,110);
glVertex2i(600,110);
glVertex2i(600,130);
glVertex2i(520,130);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(620,110);
glVertex2i(680,110);
glVertex2i(680,130);
glVertex2i(620,130);
glEnd();
// Front House
glColor3f(1,0.85,0.13);
glBegin(GL_POLYGON);
glVertex2i(200,200);
glVertex2i(360,200);
glVertex2i(360,400);
glVertex2i(200,400);
glEnd();
// Side of front House
glColor3f(0.56,0.39,0.5);
glBegin(GL_POLYGON);
glVertex2i(360,200);
glVertex2i(600,200);
glVertex2i(600,400);
glVertex2i(360,400);
glEnd();
// Triangle above front
glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2i(200,400);
glVertex2i(360,400);
glVertex2i(280,550);
glEnd();
//// Circle in Triangle
	//Setting initial value
	x = 260; //xc -r
	y = 460; //yc
	glColor3f(1,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (300)) //xc +r
	{
		x = x + 1;
		temp = sqrt(pow(20,2)-pow(x-280,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
	}
glEnd();
////
//Parallelogram
glColor3f(0.92,0.54,0.13);
glBegin(GL_POLYGON);
glVertex2i(360,400);
glVertex2i(600,400);
glVertex2i(520,550);
glVertex2i(280,550);
glEnd();
//Door
glColor3f(0.51,0.55,0.62);
glBegin(GL_POLYGON);
glVertex2i(250,200);
glVertex2i(310,200);
glVertex2i(310,320);
glVertex2i(250,320);
glEnd();
//Window
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2i(430,250);
glVertex2i(530,250);
glVertex2i(530,350);
glVertex2i(430,350);
glEnd();
//Window Line
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(478,250);
glVertex2i(482,250);
glVertex2i(482,350);
glVertex2i(478,350);
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(430,298);
glVertex2i(530,298);
glVertex2i(530,302);
glVertex2i(430,302);
glEnd();
//Window line ends
//Green Color Grassing
glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2i(0,200);
glVertex2i(200,200);
glVertex2i(200,380);
glVertex2i(0,380);
glEnd();
glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2i(600,200);
glVertex2i(700,200);
glVertex2i(700,380);
glVertex2i(600,380);
glEnd();
// Mountain
glColor3f(0.27,0,0);
glBegin(GL_POLYGON);
glVertex2i(0,380);
glVertex2i(200,380);
glVertex2i(60,620);
glVertex2i(0,530);
glEnd();
// Mountain 2
glColor3f(0.27,0,0);
glBegin(GL_POLYGON);
glVertex2i(30,380);
glVertex2i(200,380);
glVertex2i(200,660);
glEnd();
glColor3f(0.27,0,0);
glBegin(GL_POLYGON);
glVertex2i(200,400);
glVertex2i(270,531);
glVertex2i(200,660);
glEnd();
//Chimney
glColor3f(1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2i(480,550);
glVertex2i(510,550);
glVertex2i(510,590);
glVertex2i(480,590);
glEnd();
//Circle
	//Setting initial value
	x = 600; //xc -r
	y = 630; //yc
	glColor3f(1,1,0);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (660)) //xc +r
	{
		x = x + 1;
		temp = sqrt(pow(30,2)-pow(x-630,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
	}
glEnd();
//Flush the whole window
glFlush();
}
//////////////Mouse Function
void myMouse(int button, int state, int x, int y) 
{
if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{
		x = 600; //xc -r
	y = 630; //yc
	glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2d(x,y);
	while(x < (660)) //xc +r
	{
		x = x + 1;
		temp = sqrt(pow(30,2)-pow(x-630,2)); 

		temp_int = int(temp+0.5);
glVertex2d(x,y+temp_int);
glVertex2d(x,y-temp_int);
	}
glEnd();	
}
glFlush();
}
//////////////
///////////////Keyboard Function
void event1(unsigned char key, int x, int y )
{
if(key)
{
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 480,590 );
	glVertex2d( 480,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 485,590 );
	glVertex2d( 485,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 490,590 );
	glVertex2d( 490,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 495,590 );
	glVertex2d( 495,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 500,590 );
	glVertex2d( 500,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 505,590 );
	glVertex2d( 505,620 );
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin( GL_LINES );
	glVertex2d( 510,590 );
	glVertex2d( 510,620 );
	glEnd();
	glFlush();
}
}
///////////////
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Nishkarsh Raj Assignment 2");
init();
glutDisplayFunc(display);
glutKeyboardFunc(event1);
glutMouseFunc(myMouse);
glutMainLoop();
}
