#include <stdio.h>
#include <GL/glut.h>
void display(void)
{
glClear( GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(2.0, 4.0, 0.0);
glVertex3f(8.0, 4.0, 0.0);
glVertex3f(8.0, 6.0, 0.0);
glVertex3f(2.0, 6.0, 0.0);
glEnd();
glFlush();
}
int main(int argc, char **argv)
{
printf("hello world\n");
glutInit(&argc, argv);
glutInitDisplayMode
( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
return 0;
}
