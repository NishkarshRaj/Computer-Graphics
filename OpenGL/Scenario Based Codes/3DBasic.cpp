#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
using namespace std;
char title[] = "3D Shapes";
void initGL() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClearDepth(1.0f);                 
   glEnable(GL_DEPTH_TEST);  
   glDepthFunc(GL_LEQUAL);   
   glShadeModel(GL_SMOOTH);  
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  
}
void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();                  // Reset the model-view matrix
   glTranslatef(-1.5f, 0.0f, -6.0f);  // Move left and into the screen
 
   glBegin(GL_TRIANGLES);           
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(1.0f, 1.0f, 1.0f);   
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(1.0f, 0.0f, 0.0f);   
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(1.0f, 1.0f, 1.0f);   
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(1.0f, 0.0f, 0.0f);   
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(1.0f, 0.0f, 0.0f);  
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(1.0f,0.0f,0.0f);  
      glVertex3f(-1.0f,-1.0f,-1.0f);
      glColor3f(1.0f,1.0f,1.0f);    
      glVertex3f(-1.0f,-1.0f, 1.0f);
   glEnd();   
   glutSwapBuffers();
}
void reshape(GLsizei width, GLsizei height) {  
   if (height == 0) height = 1;                
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
   glViewport(0, 0, width, height);
   glMatrixMode(GL_PROJECTION); 
   glLoadIdentity();            
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}
int main(int argc, char** argv) {
   glutInit(&argc, argv);            
   glutInitDisplayMode(GLUT_DOUBLE); 
   glutInitWindowSize(640, 480);   
   glutInitWindowPosition(50, 50); 
   glutCreateWindow(title);        
   glutDisplayFunc(display);       
   glutReshapeFunc(reshape);     
   initGL();       
   glutMainLoop(); 
   return 0;
}
