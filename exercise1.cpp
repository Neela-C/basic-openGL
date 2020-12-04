#include <glut.h>

void display()

{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.5,0.5,0.5);

    glBegin(GL_POLYGON);
        glVertex2f(-0.75, -0.75);
        glVertex2f(-0.75,0.75);
        glVertex2f(0.75,0.75);
        glVertex2f(0.75,-0.75);
    glEnd();

    

    glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        glVertex2f(-0.5,-0.5);
        glColor3f(0,1,1);
        glVertex2f(0.5,-0.5);
        glColor3f(1,0,1);
        glVertex2f(0,0.5);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0,0,0,0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0,1.0,-1.0,1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("simple");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
}