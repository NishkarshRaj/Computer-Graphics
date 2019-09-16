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
//Black Road
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(700,0);
glVertex2i(700,100);
glVertex2i(0,100);
glEnd();
//White line on Road
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(0,40);
glVertex2i(700,40);
glVertex2i(700,50);
glVertex2i(0,50);
glEnd();
//Front House
glColor3f(0.6,0.16,0.16);
glBegin(GL_POLYGON);
glVertex2i(100,100);
glVertex2i(250,100);
glVertex2i(250,300);
glVertex2i(100,300);
glEnd();
//Front gate at front house
glColor3f(0.6,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(145,100);
glVertex2i(205,100);
glVertex2i(205,220);
glVertex2i(145,220);
glEnd();
//Triangle above front house
glColor3f(0.6,0.5,0.16);
glBegin(GL_POLYGON);
glVertex2i(100,300);
glVertex2i(250,300);
glVertex2i(175,500);
glEnd();
//Parallelogram right to triangle
glColor3f(0.6,0.2,0.3);
glBegin(GL_POLYGON);
glVertex2i(250,300);
glVertex2i(550,300);
glVertex2i(475,500);
glVertex2i(175,500);
glEnd();
//Rectangle below parallelogram
glColor3f(0.6,0.4,0.16);
glBegin(GL_POLYGON);
glVertex2i(250,100);
glVertex2i(550,100);
glVertex2i(550,300);
glVertex2i(250,300);
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
