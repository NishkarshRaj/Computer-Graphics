#include <math.h>
#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <complex> 

/*
    The Mandelbrot is solved recursively within the complex coordinate 
    plane where each coordinate is represented as a variable "C". With 
    each coordinate a series of Z's are found until a Max iteration number
    is reached. Z is defined as the function: 
        Z(n+1) =  Z(n)^2 + C

    Within this code we will convert from the typical Cartesian Plane (i.e. x, y)
    defined within OpenGL to that of a complex plane. 
*/

void mandelBrot( ){

}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glBegin(GL_POINTS);
    
    glEnd();
    glFlush(); 
}
int main(int argc, char **argv, char**arg){
    glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(700,700);
	glutInitWindowSize(500,500);
	glutCreateWindow("Mandelbrot");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}