 glBegin(GL_POINTS);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
  }
 glEnd();