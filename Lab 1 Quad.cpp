#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-3,3,-3,3,-3,3);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(2.0,2.0,0.0);
        glVertex3d(2.0,-2.0,0.0);
        glVertex3d(-2.0,-2.0,0.0);
        glVertex3f(-2.0,2.0,0.0);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(200,200);
    glutCreateWindow("DEMO");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
