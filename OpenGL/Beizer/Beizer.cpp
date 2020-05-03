#include<iostream>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include<GL/glut.h>
#include<GL/gl.h>
void keyboard(unsigned char key, int x, int y);
#define MAX_CPTS  25   /* fixed maximum number of control points */
GLfloat cpts[MAX_CPTS][3];
int ncpts = 0;
static int width = 500, height = 500;   /* window width and height */
void drawCurves(){
	int i;
	for (i = 0; i<ncpts - 3; i += 3){
		glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, cpts[i]);
		glMapGrid1f(30, 0.0, 1.0);
		glEvalMesh1(GL_LINE, 0, 30);
	}
	glFlush();
}
void display(){
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	for (i = 0; i < ncpts; i++)
		glVertex3fv(cpts[i]);
	glEnd();
	glFlush();
}
void mouse(int button, int state, int x, int y){
	float wx, wy;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		wx = (2.0 * x) / (float)(width - 1) - 1.0;
		wy = (2.0 * (height - 1 - y)) / (float)(height - 1) - 1.0;
		if (ncpts == MAX_CPTS) return;
		cpts[ncpts][0] = wx;
		cpts[ncpts][1] = wy;
		cpts[ncpts][2] = 0.0;
		ncpts++;
		glColor3f(0.0, 0.0, 0.0);
		glPointSize(5.0);
		glBegin(GL_POINTS);
		glVertex3f(wx, wy, 0.0);
		glEnd();
		glFlush();
	}
}
void keyboard(unsigned char key, int x, int y){
	switch (key){
	case 'q': case 'Q':
		exit(0);
		break;
	case 'c': case 'C':
		ncpts = 0;
		glutPostRedisplay();
		break;
	case 'e': case 'E':
		glutPostRedisplay();
		break;
	case 'b': case 'B':
		drawCurves();
		break;
	}
}
void reshape(int w, int h){
	width = w;
	height = h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glViewport(0, 0, w, h);
}
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(width, height);
	glutCreateWindow("curves");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(5.0);
	glEnable(GL_MAP1_VERTEX_3);
glutCreateWindow("Shreya Singh");
	glutMainLoop();
}
