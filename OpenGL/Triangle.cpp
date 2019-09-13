#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;

void display()
{
	//glClear( GL_COLOR_BUFFER_BIT );
	//glColor3f(0.1, 0.5, 0.0);
	glBegin( GL_TRIANGLES );
		glVertex2i( 200,200 );
		glVertex2i( 400,200 );
		glVertex2i( 300,300 );
	glEnd();
	glFlush();
}
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1.0, 0.0, 0.0, 1.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, 		Max Height)
    gluOrtho2D(0.0, 700, 0.0, 700);
}
int main(int argc, char** argv) 
{
    int mode = GLUT_RGB|GLUT_DOUBLE;
    glutInit(&argc, argv); 
    glutInitDisplayMode( mode ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Nishkarsh"); 
    init(); //Important to initialize 
    glutDisplayFunc(display); 
    glutMainLoop();  //See screen for long time similar to getch
}

