#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>

/*void myMouse(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
        	glVertex2f(0.0,0.0);
        	glVertex2f(6.0,4.0);
        	glVertex2f(6.0,0.0);
        	glEnd();
        	glFlush();
	}
}*/

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
/*	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(6.0,4.0);
	glVertex2f(6.0,0.0);
	glEnd();*/
 	glBegin(GL_POINTS);
 	for(int i=0;i<1000;++i)
  	{
 	 glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
 	 }
	 glEnd();
	glFlush();
}
int main(int argc,char **argv,char **arg)
{
	printf("Hello World\n");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(700,700);
	glutInitWindowSize(500,500);
	glutCreateWindow("Green Triangle");
	glutDisplayFunc(display);
//	glutMouseFunc(myMouse);
	glutMainLoop();
	return 0;

}

