# OpenGL in Linux using Glut version 3

# Configure the OpenGL environment
```
$ sudo apt-get upgrade
$ sudo apt-get update
$ sudo apt-get install freeglut3-dev
```

# Use the following two Header files in the OpenGL code

```
<GL/glut.h>
<GL/gl.h>
```

# Use the following line in the DisplayFunc for rendering background in the OpenGL code:

```
glClear(GL_COLOR_BUFFER_BIT)
```

# Compile OpenGL code
```
$ g++ <filename.ext> -lglut -lGLU -lGL
```

# Run the executable
```
./a.out
```

# Standard Code form
```c
#include<GL/glut.h>
#include<GL/gl.h>
void init()
{
glClearColor(R,G,B,Transparency);
glMatrixMode(GL_PROJECTIONS);
gluOrtho2d(xmin,xmax,ymin,ymax);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(R,G,B);
glBegin(PRIMITIVE SHAPE);
glVertex3d(X,Y,Z);
glEnd();
glFlush();
}
int main(int argc, char **argv)
{
glutInit(&argc, argv); 
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB ); 
    glutInitWindowSize( xmax,ymax ); 
    glutCreateWindow("Window Name"); 
    init();  
glutDisplayFunc();
glutMainLoop();
}
```
