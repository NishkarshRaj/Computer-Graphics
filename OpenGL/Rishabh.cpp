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
	glBegin( GL_POLYGON );
		glVertex2i( 100,100 );
		glVertex2i( 150,100 );
		glVertex2i( 150,150 );
		glVertex2i( 100,150 ); 
	glFlush();
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_LINES);
	glVertex2i(0,700);
	glVertex2i(700,0);
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
