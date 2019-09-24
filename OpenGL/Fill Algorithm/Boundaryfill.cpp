#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>

//Structure 1: Point
struct Point 
{
	GLint x;
	GLint y;
};

//Structure 2: Color
struct Color {
	GLfloat r;
	GLfloat g;
	GLfloat b;
};

//Function 1: Initialize the OpenGL environment
void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0); // Black Color
	glColor3f(0.0, 0.0, 0.0); // White Color
	glPointSize(1.0); // Specify the point size
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 700, 0, 700);
}

// Function of return type Color which is a structure defined above
// Function 2: GetPixelColor
Color getPixelColor(GLint x, GLint y) 
{
	Color color; //Color Structure variable
	glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, &color); //Built in functions
	return color;
}

// Function 3: SetPixelColor
void setPixelColor(GLint x, GLint y, Color color) 
{
	glColor3f(color.r, color.g, color.b);
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
	glFlush();
}

// Function 4: Boundary Fill
void BoundaryFill(int x, int y, Color fillColor, Color boundaryColor) {
	Color currentColor = getPixelColor(x, y);
	if(currentColor.r != boundaryColor.r && currentColor.g != boundaryColor.g && currentColor.b != boundaryColor.b) {
		setPixelColor(x, y, fillColor);
		BoundaryFill(x+1, y, fillColor, boundaryColor);
		BoundaryFill(x-1, y, fillColor, boundaryColor);
		BoundaryFill(x, y+1, fillColor, boundaryColor);
		BoundaryFill(x, y-1, fillColor, boundaryColor);
	}
}

//Function 5: Mouse Click Function
void onMouseClick(int button, int state, int x, int y)
{
	Color fillColor = {1.0f, 0.0f, 0.0f};		// red color will be filled
	Color boundaryColor = {0.0f, 0.0f, 0.0f}; // black- boundary

	Point p = {350,350}; // a point inside the square

	BoundaryFill(p.x, p.y, fillColor, boundaryColor);
}


void display(void) {
	Point pt = {320, 240};
	GLfloat length = 50;
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	//Draw square using points
	//Lower point of square
	for(i=200;i<=500;i++)
	{
		glVertex2i(i,200);
	}
	//right boundary
	for(i=200;i<=500;i++)
	{
		glVertex2i(500,i);
	}
	//Top boundary
	for(i=500;i>=200;i++)
	{
		glVertex2i(i,500);
	}
	//Left boundary
	for(i=500;i>=200;i++)
	{
		glVertex2i(200,i);
	}
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Boundary Fill : Nishkarsh");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(onMouseClick);
	glutMainLoop();
	return 0;
}
