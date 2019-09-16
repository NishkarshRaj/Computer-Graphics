#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
//Lowermost Green Color Bottom Cover
glColor3i(0,255,0);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(700,0);
glVertex2i(700,40);
glVertex2i(0,40);
glEnd();
//Black Road
glColor3i(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(0,40);
glVertex2i(700,40);
glVertex2i(700,200);
glVertex2i(0,200);
glEnd();
//White Patches on the Black Road
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(20,110);
glVertex2i(100,110);
glVertex2i(100,130);
glVertex2i(20,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(120,110);
glVertex2i(200,110);
glVertex2i(200,130);
glVertex2i(120,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(220,110);
glVertex2i(300,110);
glVertex2i(300,130);
glVertex2i(220,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(320,110);
glVertex2i(400,110);
glVertex2i(400,130);
glVertex2i(320,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(420,110);
glVertex2i(500,110);
glVertex2i(500,130);
glVertex2i(420,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(520,110);
glVertex2i(600,110);
glVertex2i(600,130);
glVertex2i(520,130);
glEnd();
glColor3i(255,255,255);
glBegin(GL_POLYGON);
glVertex2i(620,110);
glVertex2i(680,110);
glVertex2i(680,130);
glVertex2i(620,130);
glEnd();
//Flush the whole window
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Hut");
init();
glutDisplayFunc(display);
glutMainLoop();
}
