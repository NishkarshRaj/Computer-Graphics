#include<GL/gl.h>
#include<GL/glut.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
int xmin = -100;
int xmax = 100;
int ymin = -100;
int ymax = 100;
int xmi, xma, ymi, yma;
int cut;
void display(){
glColor3f(0.0, 1.0, 1.0);
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glVertex2i(xmin, ymin);
glVertex2i(xmax, ymin);
glVertex2i(xmax, ymax);
glVertex2i(xmin, ymax);
glEnd();
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(xmi, ymi);
glVertex2i(xma, ymi);
glVertex2i(xma, yma);
glVertex2i(xmi, yma);
glEnd();
glutSwapBuffers();
}
void clip(){
while (xmi<xmin || xma>xmax || ymi<ymin || yma>ymax){
if (xmi<xmin){
cut = xmin - xmi;
xmi = xmi + cut;
}
else if (xma>xmax){
cut = xma - xmax;
xma = xma - cut;
}
else if (ymi<ymin){
cut = ymin - ymi;
ymi = ymi + cut;
}
else if (yma>ymax){
cut = yma - ymax;
yma = yma - cut;
}
glutPostRedisplay();
}
}
void mykey(unsigned char key, int x, int y){
if (key == 'c')
{
clip();
}
}
void init(void){
glClearColor(0.0, 0, 0, 0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(-300, 300, -300, 300);
}
int main(int argc, char** argv){
printf("Enter the points for left bottom of polygon: \n");
scanf("%d%d", &xmi, &ymi);
printf("\nEnter the points for right up of the polygon: \n");
scanf("%d%d", &xma, &yma);
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Shreya");
glutDisplayFunc(display);
glutKeyboardFunc(mykey);
init();
glutMainLoop();
return 0;
}
