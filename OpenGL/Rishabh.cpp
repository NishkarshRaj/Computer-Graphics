#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{
	glClear( GL_COLOR_BUFFER_BIT );
	glColor3f(0, 0, 0.0);
	glBegin( GL_POYLGON );
		glVertex2i( 200,500 );
		glVertex2i( 500,200 );
		glVertex2i( 500,500 );
		glVertex2i( 200,500 ); 
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE);
	glVertex2i(700,700);
	glVertex2i(0,0);
	glEnd();
	glFlush();
}
int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Square Line Interaction"); 
    init();  
    glutDisplayFunc(display); 
    glutMainLoop();  
}
