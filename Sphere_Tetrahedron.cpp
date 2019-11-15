#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
void init()
{
glClearColor(0.0,0.0,0.0,1.0); //Blue background
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,700,0,700);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
//TetraHedron White
//Polygon comprising of 4 points in 3 Dimension
//Thus we are using Vertex "3" for 3 Dimension
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex3i(40,50,60);
glVertex3i(250,250,250);
glVertex3i(0,0,0);
glVertex3i(500,500,500);
glEnd();
glFlush();
//Sphere -> Red
/*glColor3f(1,0,0);
glBegin(GL_POINTS)
glEnd();
glFlush();
*/
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
