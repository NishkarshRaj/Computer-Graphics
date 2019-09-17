#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

double P1, Q1, P2, Q2;

float round_value(float rv)
{
  return floor(rv + 0.5);
}
void LineDDA(void)
{
  double dx=(P2-P1);
  double dy=(Q2-Q1);
  double steps;
  float pInc,qInc,x=P1,y=Q1;
  /* Find out which to increment x or y */
  steps=(abs(dx)>abs(dy))?(abs(dx)):(abs(dy));
  pInc=dx/(float)steps;
  qInc=dy/(float)steps;

  /* Clears preset values of buffer */
  glClear(GL_COLOR_BUFFER_BIT);

  /* Plot points */
  glBegin(GL_POINTS);
  /* Plot first point */
  glVertex2d(x,y);
  int k;
  /* find intermediate vertex with every steps*/
  for(k=0;k<steps;k++)
  {
    x+=pInc;
    y+=qInc;
    /* printf("%0.6lf %0.6lf\n",floor(x), floor(y)); */
    glVertex2d(round_value(x), round_value(y));
  }
  glEnd();

  glFlush();
}
void Init()
{
  /* clear white color buffer */
  glClearColor(1.0,1.0,1.0,0);
  /* clear black color buffer */
  glColor3f(0.0,0.0,0.0);
  gluOrtho2D(0 , 640 , 0 , 480);
}
int main(int argc, char **argv)
{
  printf("Enter 2 end points of the line to draw :\n");
  printf("\n************************************");
  printf("\nEnter Point 1 ( P1 , Q1):\n");
  scanf("%lf%lf",&P1,&Q1);
  printf("\n************************************");
  printf("\nEnter Point 1 ( P2 , Q2):\n");
  scanf("%lf%lf",&P2,&Q2);
 
  /* Initialize GLUT library */
  glutInit(&argc,argv);
  /* Initialize display mode */
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  /* Initialize window position and size */
  glutInitWindowPosition(0,0);
  glutInitWindowSize(640,480);
  /* Create new window with title "DDA_Line" */
  glutCreateWindow("DDA_Line");
  /* Initialize drawing colors */
  Init();
  /* Call the displaying function */
  glutDisplayFunc(LineDDA);
  /* Keep looping untill program is closed */
  glutMainLoop();
}
