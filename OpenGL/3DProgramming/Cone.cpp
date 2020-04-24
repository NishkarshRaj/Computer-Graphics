#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>

GLfloat xRotated, yRotated, zRotated;
GLdouble base=1;
GLdouble height=1.5;
GLint slices =25;
GLint stacks =25;
void display(void);
void idle(void)
{
 
	xRotated =xRotated + 0.01;
	yRotated += 0.01;
    zRotated += 0.01; 
    display();
}
void myinit()
{
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void display(void)
{
     glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    // clear the drawing buffer.
    glClear(GL_COLOR_BUFFER_BIT);
    // clear the identity matrix.
    glLoadIdentity();
    // traslate the draw by z = -4.0
    // Note this when you decrease z like -8.0 the drawing will looks far , or smaller.
    glTranslatef(0.0,0.0,-5.0);
    // Red color used to draw.
    glColor3f(0.9, 0.3, 0.2); 
    // changing in transformation matrix.
    // rotation about X axis
    glRotatef(xRotated,1.0,0.0,0.0);
    // rotation about Y axis
    glRotatef(yRotated,0.0,1.0,0.0);
    // rotation about Z axis
    glRotatef(zRotated,0.0,0.0,1.0);
    // scaling transfomation 
    glScalef(1.0,1.0,1.0);
    // built-in (glut library) function , draw you a sphere.
    glutSolidCone(base,height,slices,stacks);
    // Flush buffers to screen
     
    glFlush();        
    // sawp buffers called because we are using double buffering 
   // glutSwapBuffers();
}

void myReshape(GLsizei w, GLsizei h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

        glOrtho (-1.5, 1.5, -1.5*(GLfloat)480/(GLfloat)640, 
            1.5*(GLfloat)480/(GLfloat)640, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    //glViewport(0,0,w,h);  //Use the whole window for rendering
    glLoadIdentity();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
    glutInitWindowSize (640,480);
    glutInitWindowPosition (200,200);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA |GLUT_DEPTH);
    xRotated = yRotated = zRotated = 30.0;
    xRotated=43;
    yRotated=50;
	  glutCreateWindow("Cone | Shreya Singh");
    glutDisplayFunc(display);
    glutReshapeFunc (myReshape);
    myinit();
	  glutIdleFunc(idle);
    glutMainLoop();
}
