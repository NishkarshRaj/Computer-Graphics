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
