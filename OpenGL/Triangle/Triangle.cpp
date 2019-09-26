#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
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
	glClear( GL_COLOR_BUFFER_BIT );
	//glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_TRIANGLES );
		glVertex2i( 200,400 );
		glVertex2i( 400,400 );
		glVertex2i( 300,600 );
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
    glutMainLoop();  //See screen for long time similar to getch
}

