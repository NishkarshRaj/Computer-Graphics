#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
void init()
{
glClearColor(0.0,0.0,1.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
/*glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(700,0);
glVertex2i(700,40);
glVertex2i(0,40);
glEnd();
glFlush();
*/
//Sphere -> Red
glColor3f(1,0,0);
glBegin(GL_POINTS)
glEnd();
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutCreateWindow("Lab Programming Test");
init();
glutDisplayFunc(display);
glutMainLoop();
}
