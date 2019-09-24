#include<GL/glut.h>
#include<GL/gl.h> 
#include<iostream>
using namespace std;
// Boundary Fill is used for Area filling a polygon similar to the Paint => Can be similar color as boundary or not.
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0); //Red Background
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 700, 0.0, 700);
}

//Structure for Color def in 3 co-ordinates because getpixel returns three float values in [0,1];
struct Color
{
GLfloat r;
GLfloat g;
GLfloat b;
};

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

Color getPixelColor(int x, int y)
{
Color color;
glReadPixels(x,y,1,1, GL_RGB, GL_FLOAT, &color);
return color;
}

void bfill4(int x,int y, Color fill, Color boundary)
{
Color current = getPixelColor(x,y);
if((current.r!=boundary.r)&&(current.g!=boundary.g)&&(current.b!=boundary.b))
{
	glColor3f(1,0,0);
	glBegin(GL_POINTS);
	glVertex2d(x,y);
	glEnd();
	glFlush();
bfill4(x+1,y,fill,boundary);
bfill4(x-1,y,fill,boundary);
bfill4(x,y+1,fill,boundary);
bfill4(x,y-1,fill,boundary);
}
}

// Create a Keyboard Function to invoke Boundary fill algorithm
void event1(unsigned char key, int x, int y) 
{
int i,j;
i=350;
j=350;
Color fill={1,0,0};
Color boundary={0,0,0};
if(key)
{
//Signifying boundary color as 0 for 0,0,0 for black
//Signifying fill color as 1 for 1,0,0 for red
bfill4(i,j,fill,boundary);
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
    glutKeyboardFunc(event1);
    glutMainLoop();  
}

