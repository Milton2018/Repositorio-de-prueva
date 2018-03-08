#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(20);
   
    glColor3f(1.0f,1.0f,1.0f);  
      glEnd();
    //cuadrado
    glColor3f (0.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex3f(-0.5f,0.5f,0.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(0.5f,-0.5f,0.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
   glEnd();
   //puerta+
    glColor3f (1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex3f(-0.2f,-0.5f,0.0f);
    glVertex3f(-0.2f,-0.0f,0.0f);
    glVertex3f(0.2f,-0.0f,0.0f);
    glVertex3f(0.2f,-0.5f,0.0f);
     glEnd();
    //techo
    glColor3f (0.1f, 0.6f, 0.5f);
    glTranslatef (0.0f,0.0f,-0.2f);
    glBegin(GL_LINES);
    glVertex3f(-0.5f,0.5f,0.0f);
    glVertex3f(0.0f,1.0f,0.0f);
    glVertex3f(0.0f,1.0f,0.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(-0.5f,0.5f,0.0f);
  glEnd();
    
       glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, 1.0, 1.0, -1.0, -1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo lineas");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
