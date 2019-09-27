#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
int x1,y1;
using namespace std;
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{	
	x1=100;
	y1=100;
	glClear( GL_COLOR_BUFFER_BIT );
	glColor3f(0, 0, 0.0);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1 );
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_LINES);
	glVertex2i(0,700);
	glVertex2i(700,0);
	glEnd();

	glFlush();
}
//Keyboard function
void event1(unsigned char key, int x, int y )
{
if(key=='w')
{
glColor3f(1, 1, 1);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1 );
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
	
	y1=y1+10;
	glColor3f(0, 0, 0);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1);
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
}
if(key=='s')
{
	glColor3f(1, 1, 1);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1 );
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
	
	y1=y1-10;
	glColor3f(0, 0, 0);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1);
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
}
if(key=='a')
{
glColor3f(1, 1, 1);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1 );
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
	
	x1=x1-10;
	glColor3f(0, 0, 0);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1);
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
}
if(key=='d')
{
	glColor3f(1, 1, 1);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1 );
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
	
	x1=x1+10;
	glColor3f(0, 0, 0);
	glBegin( GL_POLYGON );
		glVertex2i( x1,y1 );
		glVertex2i( x1+50,y1);
		glVertex2i( x1+50,y1+50 );
		glVertex2i( x1,y1+50 ); 
	glFlush();
}
}
//
int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Square Line Interaction"); 
    init();  
    glutDisplayFunc(display); 
    glutKeyboardFunc(event1);
    glutMainLoop();  
}
