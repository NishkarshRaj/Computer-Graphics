FROM ubuntu
RUN apt-get -y update
RUN apt-get -y install apt-utils
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
ADD Hut.cpp /Hut.cpp
RUN pwd
RUN ls
RUN g++ /Hut.cpp -lglut -lGLU -lGL
RUN ./a.out
