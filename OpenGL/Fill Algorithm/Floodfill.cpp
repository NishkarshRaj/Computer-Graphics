#include <math.h>
#include <GL/glut.h>
#include<GL/gl.h>

struct Color {
	GLfloat r;
	GLfloat g;
	GLfloat b;
};

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 700, 0, 700);
}

Color getPixelColor(GLint x, GLint y) {
	Color color;
	glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, &color);
	return color;
}

void setPixelColor(GLint x, GLint y, Color color) {
	glColor3f(color.r, color.g, color.b);
	glBegin(GL_POINTS);
		glVertex2i(x, y);
	glEnd();
	glFlush();
}

void floodFill(GLint x, GLint y, Color oldColor, Color newColor) {
	Color color;
	color = getPixelColor(x, y);

	if(color.r == oldColor.r && color.g == oldColor.g && color.b == oldColor.b)
	{
		setPixelColor(x, y, newColor);
		floodFill(x+1, y, oldColor, newColor);
		floodFill(x, y+1, oldColor, newColor);
		floodFill(x-1, y, oldColor, newColor);
		floodFill(x, y-1, oldColor, newColor);
	}
	return;
}

void onMouseClick(int button, int state, int x, int y)
{
	Color newColor = {1.0f, 0.0f, 0.0f};
	Color oldColor = {1.0f, 1.0f, 1.0f};

	floodFill(101, 199, oldColor, newColor);
}

void display(void) 
{
	int i;
	for(i=200;i<=500;i++)
	{
		glColor3f(0,1,0);
	glBegin(GL_POINTS);
	glVertex2i(i,200);
	glEnd();
	glFlush();
	}		
	for(i=200;i<=500;i++)
	{
		glColor3f(0,1,0);
	glBegin(GL_POINTS);
	glVertex2i(500,i);
	glEnd();
	glFlush();
	}
	for(i=500;i>=200;i--)
	{
		glColor3f(0,1,0);
	glBegin(GL_POINTS);
	glVertex2i(i,500);
	glEnd();
	glFlush();
	}
	for(i=500;i>=200;i--)
	{
		glColor3f(0,1,0);
	glBegin(GL_POINTS);
	glVertex2i(200,i);
	glEnd();
	glFlush();
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Fill Color By Nishkarsh Raj");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(onMouseClick);
	glutMainLoop();
	return 0;
}
