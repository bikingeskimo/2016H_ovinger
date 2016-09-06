#include <GL/glut.h>
#include <iostream>

using namespace std;

void myInit(){
 glClearColor(1.0, 1.0, 1.0, 1.0);
 glColor3f(1.0, 0.0, 0.0);
 
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0.0, 50.0, 0.0, 50.0);
 glMatrixMode(GL_MODELVIEW);
}

void display(){
  //Triangel
  GLfloat vertices[3][2] = {{0.0,0.0}, {25.0,50.0}, {50.0,0.0}};
  int i, j, k;
  int rand();
  GLfloat p[2] ={7.5, 5.0};
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POINTS);
  
  for(k=0; k<5000; k++){
    j=rand()%3;
    
    p[0] = (p[0]+vertices[j][0])/2.0;
    p[1] = (p[1]+vertices[j][1])/2.0;
    
    glVertex2fv(p);
    
  }
  glEnd();
  glFlush();
  
}

int main(int argc, char** argv) {
  
  glutInit(&argc, argv);
  
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Sierpinski Gasket");
  glutDisplayFunc(display);
  myInit();
  glutMainLoop();
}
