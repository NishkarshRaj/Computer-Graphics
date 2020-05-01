#ifndef LSys_H
#define LSys_H

//Internal Libraries 
#include <math.h>
#include <iostream>
#include <string>
#include <float.h>
#include <vector> 

//Screen Size Macros 
#define MAX_WIDTH 500
#define MAX_HEIGHT 500 

//Math Macros 
#define SIN(x) sin(x * 3.14159265/180)
#define COS(x) cos(x * 3.14159265/180)

using namespace std; 

//Defines a point to be read by openGL
typedef struct vertex{
    double x;
    double y; 
}vertex; 

//Defines two points to draw a line between for openGL
typedef struct line{
    vertex a; 
    vertex b; 
}line; 

/*
    This class will generate a vector of lines using the struct defined above 
    Ultilize the parameter based constructor and the buildLSys function to create
    the L-System fractals. 

*/
class LSys 
{
public:

    //Default Constructors 
        LSys();

    //Parameter Based Constructor: (Axoim, F, X, Length of line, Rotation/phi)
        LSys( string a, string f, string x, int len, double p); 

    //Building functions: @param  iterations: is the generation number of the fractial (i.e. n)
        vector<line> buildLSys( int iterations ); 

private:

    //Helper Functions 
    
        //This function will expand the string of the language to the desired iteration number 
        string languageExpander( int iterations ); 

        //This function will build vector of lines based on the languge passed in 
        void buildHelper( string lanaguage, double rotation, vertex lastVTRX );
    
    //Private Variables
        vector<line> lines; 

    //Language Parts 
        string axoim; 
        string F; 
        string X;
        int length;
        double phi;     

};

#endif