#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
// Boundary Fill is used for Area filling a polygon similar to the Paint => Can be similar color as boundary or not.
// Starting from an interior point=> fill color until boundary is met.
void init()
{
    glClearColor(1.0, 0.0, 0.0, 1.0); //Red Background
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{
	int i;
	glClear( GL_COLOR_BUFFER_BIT );
	//We have to create a fill figure so dont create polygon, use points instead
	//Creating a square (200,200) (500,200) (500,500) (200,500)
	//Lets Keep boundary color as black (0,0,0)
	//bottom line
	for(i=200;i<=500;i++)
	{
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
		glVertex2i(i,200);
		glEnd();
		glFlush();
	}
	for(i=200;i<=500;i++)
	{
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
		glVertex2i(500,i);
		glEnd();
		glFlush();
	}
	for(i=500;i>=200;i--)
	{
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
		glVertex2i(i,500);
		glEnd();
		glFlush();
	}
	for(i=500;i>=200;i--)
	{
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
		glVertex2i(200,i);
		glEnd();
		glFlush();
	}
}
int main(int argc, char**argv) 
{
    glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( 700,700 ); 
    glutCreateWindow("Boundary Fill Algorithm"); 
    init(); 
    glutDisplayFunc(display); 
    glutMainLoop();  
}

