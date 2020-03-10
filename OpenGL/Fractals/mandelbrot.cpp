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
#define MAX_WIDTH 500 
#define MAX_HEIGHT 500 
#define MAX_VALUE 100 


int mandelbrot_formula( std::complex<double> c ){
 double z = 0;
 int n = 0; //Step Number

 while ( abs(z) <= MAX_VALUE && n <= MAX_VALUE ){
 //Denote since C is a complex number and can be negative then z could also be negative 
    z = (z*z)+c; 
    n++;
 }
 return n; 
}

void mandelbrot_construction( int left, int right, int top, int bottom){

    for ( int b = 0; b< MAX_WIDTH; b++){
        for( int c = 0; c< MAX_HEIGHT; c++){
            std::complex<double> comp( left + ( b * (right-left))/MAX_WIDTH, bottom + (c * (top-bottom))/MAX_HEIGHT ); 

            int iteration = mandelbrot_formula(comp);
            double shade = 255 - int(iteration*255/ MAX_VALUE);

            glColor3f(shade,shade,shade);
            glVertex3f( b,c,0 ); 

        } 
    }

}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glBegin(GL_POINTS);
    mandelbrot_construction(-2,1,-1,1);
    glEnd();
    glFlush(); 
}
int main(int argc, char **argv, char**arg){
    glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(700,700);
	glutInitWindowSize(MAX_WIDTH,MAX_HEIGHT);
	glutCreateWindow("Mandelbrot");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}