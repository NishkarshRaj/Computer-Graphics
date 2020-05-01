#include "LSys.h"

using namespace std; 

//Constructors
LSys::LSys(): axoim(""), F(""), X(""), length(10), phi(90.0){}

LSys::LSys( string a, string f, string x, int len, double p): axoim(a), F(f), X(x), length(len), phi(p){}

//Building Functions 
vector<line> LSys::buildLSys( int iterations){
    //Expand Language
    string language = languageExpander( iterations);
    
    //Create a the root point 
    vertex lastVTRX; 
    lastVTRX.x = 0; 
    lastVTRX.y = 0; 

    //Parse Language
    buildHelper( language, 0, lastVTRX);

    return lines;
}

//Helper Functions 
string LSys::languageExpander( int iterations ){
    string expanded = axoim; 

    for( int b = 0; b < iterations; b++){
        string progress = "";
        for(int c = 0; c < expanded.length(); c++){
            if(expanded[c] == 'F'){
                progress += F; //Add an iteration of F terms 
            }
            else if( expanded[c] == 'X'){
                progress += X; //Add an iteration of X terms 
            }
            else{
                progress += expanded[c]; //Continue on [,],+,-
            }
        }
        expanded = progress;
    }
    return expanded; 
}

void LSys::buildHelper (string language, double rotation, vertex lastVTRX ){
       
    for ( int b =0; b< language.length(); b++){
        switch(language[b]){
            case '-': //Rotate left by phi 
                rotation -= phi;
                break;
            case '+': //Rotate right by phi 
                rotation += phi;
                break; 
            case 'F' : //Points a line in current direction
                
                vertex nextVTRX; //Create new point 
                nextVTRX.x =  lastVTRX.x + (SIN(rotation)*length);
                nextVTRX.y =  lastVTRX.y + (COS(rotation)*length);
                
                line newLine; //Create new line between points 
                newLine.a = lastVTRX;
                newLine.b = nextVTRX;
                lines.push_back(newLine);

                //Reset values for next iteration 
                lastVTRX.x = nextVTRX.x; 
                lastVTRX.y = nextVTRX.y;

                break;
            case '[': //Branch 
                string branchLang = "";
                int closure = 1; 
                for( int c = b+1; c < language.length(); c++){
                    //Encapsulates the language from Bracket to Bracket 
                    switch( language[c]){
                        case '[':
                            closure ++; 
                            break; 
                        case ']':
                            closure --; 
                            break;
                    } 
                    
                    if (closure == 0 ){ //Closed bracket 
                        //Continue with current element 
                        b=c; 
                        //Recursively build the bracketed part 
                        buildHelper(branchLang, rotation, lastVTRX);
                        break;
                    }
                    branchLang += language[c];
                }

            break; 
                }
    }

}

