#include <GL/glut.h>
#include <GL/gl.h> 

void display(void)
{
	glClear( GL_COLOR_BUFFER_BIT );
	glBegin( GL_TRIANGLE );
		glVertex2f( 0,0 );
		glVertex2f( 3,0 );
		glVertex2f( 1.5,2 );
	glEnd();
	glFlush();
}

void main(int argc, char** argv) 
{
    int mode = GLUT_RGB|GLUT_DOUBLE; 
    glutInitDisplayMode( mode ); 
    glutInitWindowSize( 500,500 ); 
    glutCreateWindow( “Nishkarsh” ); 
    init(); 
    glutDisplayFunc( display ); 
    //glutKeyboardFunc( key ); No event
    //glutMainLoop();  //No event no wait
}

