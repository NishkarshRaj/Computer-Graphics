#!/bin/bash
sudo apt-get update && sudo apt-get upgrade
sudo apt-get install freeglut3-dev
g++ Assignment2.cpp -lglut -lGLU -lGL
./a.out
