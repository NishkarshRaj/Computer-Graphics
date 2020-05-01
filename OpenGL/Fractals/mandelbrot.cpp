/*
    The Mandelbrot is solved recursively within the complex coordinate 
    plane where each coordinate is represented as a variable "C". With 
    each coordinate a series of Z's are found until a Max iteration number
    is reached. Z is defined as the function: 
        Z(n+1) =  Z(n)^2 + C

    Within this code we will convert from the typical Cartesian Plane (i.e. x, y)
    defined within OpenGL to that of a complex plane. 
*/

//Internal Libraries 
#include <math.h>
#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <complex> 

using namespace std; 

//Screen Size Macros
#define MAX_WIDTH 500 
#define MAX_HEIGHT 500 

//Iteration Marcos 
#define MAX_VALUE 100 

/*
    This function uses the famous mandelbrot equations 
    It will tell you which iteration the complex
    number C lies on with the mandelbrot Set. 

*/
int mandelbrot_formula( std::complex<double> c ){   
 std::complex<double> z (0,0);
 int n = 0; //Step Number

 while ( abs(z) < 2 && n < MAX_VALUE ){
 //Denote since C is a complex number and can be negative then z could also be negative 
    z = (z*z)+ c; 
    n++;
 }
 return n; 
}

/*
    This function will iterate through all points on the screen to calculate where in the 
    Mandelbrot set the complex C value will exist. Then plot the point in a greyscale 
    
*/
void mandelbrot_construction( int left, int right, int top, int bottom){

     glBegin(GL_POINTS);
    for ( int b = 0; b< MAX_WIDTH; ++b){
        for( int c = 0; c< MAX_HEIGHT; ++c){
            
            //Convert the Pixel's Cartesian Coordinates to Complex 
            double C_a = left + ((double)b/MAX_WIDTH)*(right-left);
            double C_b = top + ((double)c/MAX_HEIGHT)*(bottom-top); 

            std::complex<double> comp( C_a, C_b ); 

            int iteration = mandelbrot_formula(comp);
            double color = 1 - ((double)iteration/ MAX_VALUE);

            glColor3f(color,color,color);
            glVertex2i(b,c); 
            
        } 
    }
            glEnd();
            glFlush(); 

}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    mandelbrot_construction(-2,1,1,-1); //Start the Mandelbrot construction 
}

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, MAX_WIDTH, 0, MAX_HEIGHT);
}

int main(int argc, char **argv, char**arg){
    glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(MAX_WIDTH/2, MAX_HEIGHT/2);
	glutInitWindowSize(MAX_WIDTH,MAX_HEIGHT);
	glutCreateWindow("Mandelbrot");
    init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}