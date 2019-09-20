#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
int x1=200;
int x2=400;
int x3=300;
int y1=400;
int y2=400;
int y3=600;
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1.0, 0.0, 0.0, 1.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, 		Max Height)
    gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{
	//glClear( GL_COLOR_BUFFER_BIT );
	//glColor3f(0.1, 0.5, 0.0);
glColor3f(0,1,0);
	glBegin( GL_TRIANGLES );
		glVertex2i( x1,y1 );
		glVertex2i( x2,y2 );
		glVertex2i( x3,y3 );
	glEnd();
	glFlush();
}
void event1(unsigned char key, int x, int y )
{
//overwrite previous triangle with old color
glColor3f(1,0,0);
	glBegin( GL_TRIANGLES );
		glVertex2i( x1,y1 );
		glVertex2i( x2,y2 );
		glVertex2i( x3,y3 );
	glEnd();
	glFlush();
if(key=='a')
{
	x1 = x1-10;
	x2 = x2-10;
	x3 = x3-10;
}
if(key=='d')
{
	x1 = x1+10;
	x2 = x2+10;
	x3 = x3+10;	
}
if(key=='w')
{
	y1 = y1+10;
	y2 = y2+10;
	y3 = y3+10;
}
if(key=='s')
{
	y1 = y1-10;
	y2 = y2-10;
	y3 = y3-10;	
}
//Draw the triangle
//clrscr();
//system("reset");
glColor3f(0,1,0);
	glBegin( GL_TRIANGLES );
		glVertex2i( x1,y1 );
		glVertex2i( x2,y2 );
		glVertex2i( x3,y3 );
	glEnd();
	glFlush();
}
int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Nishkarsh"); 
    init(); //Important to initialize 
    glutDisplayFunc(display);
	glutKeyboardFunc(event1); 
    glutMainLoop();  //See screen for long time similar to getch
}

