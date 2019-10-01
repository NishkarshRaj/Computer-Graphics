#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1.0, 1.0, 1.0, 1.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, 		Max Height)
    gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{
	int x,y;
	glClear( GL_COLOR_BUFFER_BIT );
	y=200;
	for(x=200;x<=500;x++)
	{
		glColor3f(1,0,0);
		glBegin( GL_POINTS );
		glVertex2i( x,y );
		glVertex2i( x+4,y );
		glVertex2i( x,y+4 );
		glVertex2i( x-4,y );
		glVertex2i( x,y-4 );
		glVertex2i( x+2,y+2 );
		glVertex2i( x-2,y-2 );
		glVertex2i( x+2,y-2 );
		glVertex2i( x-2,y+2 );
	glEnd();
	glFlush();
	}
	y=500;
	for(x=200;x<=500;x++)
	{
		glColor3f(1,0,0);
		glBegin( GL_POINTS );
		glVertex2i( x,y );
		glVertex2i( x+4,y );
		glVertex2i( x,y+4 );
		glVertex2i( x-4,y );
		glVertex2i( x,y-4 );
		glVertex2i( x+2,y+2 );
		glVertex2i( x-2,y-2 );
		glVertex2i( x+2,y-2 );
		glVertex2i( x-2,y+2 );
	glEnd();
	glFlush();
	}
	x=200;
	for(y=200;y<=500;y++)
	{
		glColor3f(1,0,0);
		glBegin( GL_POINTS );
		glVertex2i( x,y );
		glVertex2i( x+4,y );
		glVertex2i( x,y+4 );
		glVertex2i( x-4,y );
		glVertex2i( x,y-4 );
		glVertex2i( x+2,y+2 );
		glVertex2i( x-2,y-2 );
		glVertex2i( x+2,y-2 );
		glVertex2i( x-2,y+2 );
	glEnd();
	glFlush();
	}
	x=500;
	for(y=200;y<=500;y++)
	{
		glColor3f(1,0,0);
		glBegin( GL_POINTS );
		glVertex2i( x,y );
		glVertex2i( x+4,y );
		glVertex2i( x,y+4 );
		glVertex2i( x-4,y );
		glVertex2i( x,y-4 );
		glVertex2i( x+2,y+2 );
		glVertex2i( x-2,y-2 );
		glVertex2i( x+2,y-2 );
		glVertex2i( x-2,y+2 );
	glEnd();
	glFlush();
	}
}
int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Star"); 
    init(); //Important to initialize 
    glutDisplayFunc(display); 
    glutMainLoop();  //See screen for long time similar to getch
}

