#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glTranslatef (0.0f,0.0f,-0.2f);
    
    glBegin(GL_QUADS);
    glColor3f (0.1f, 0.6f, 0.5f);
    glVertex3f(-0.5f,0.5f,0.0f);
    glColor3f (0.1f, 0.1f, 0.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    glColor3f (1.0f, 1.0f, 0.0f);
    glVertex3f(0.5f,-0.5f,0.0f);
    glColor3f (0.0f, 0.0f, 1.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    glEnd();
    
     
   
    glBegin(GL_QUADS);
    glColor3f (0.0f, 1.0f, 1.0f);
    glVertex3f(-0.375f,0.375f,0.0f);
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex3f(0.375f,0.375f,0.0f);
    glColor3f (0.0f, 1.0f, 0.0f);
    glVertex3f(0.375f,-0.375f,0.0f);
    glColor3f (0.0f, 0.0f, 1.0f);
    glVertex3f(-0.375f,-0.375f,0.0f);
    glEnd();
    
   
    glBegin(GL_QUADS);
    glColor3f (0.6f, 0.1f, 0.5f);
    glVertex3f(-0.25f,0.25f,0.0f);
    glColor3f (0.0f, 1.0f, 1.0f);
    glVertex3f(0.25f,0.25f,0.0f);
    glColor3f (1.0f, 1.0f, 1.0f);
    glVertex3f(0.25f,-0.25f,0.0f);
    glColor3f (1.0f, 1.0f, 0.0f);
    glVertex3f(-0.25f,-0.25f,0.0f);
    glEnd();
    
     
    
    glBegin(GL_QUADS);
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex3f(-0.125f,0.125f,0.0f);
    glColor3f (1.0f, 1.0f, 0.0f);
    glVertex3f(0.125f,0.125f,0.0f);
    glColor3f (0.0f, 0.0f, 1.0f);
    glVertex3f(0.125f,-0.125f,0.0f);
    glColor3f (0.0f, 1.0f, 1.0f);
    glVertex3f(-0.125f,-0.125f,0.0f);
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
