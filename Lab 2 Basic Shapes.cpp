#include <windows.h>
#include <GL/glut.h>
#include <stdint.h>
#include <stdlib.h>

void init()
{
    glClearColor(0.6f,0.4f,0.7f,0.0f);
    glOrtho(-10,10,-10,10,-10,10);

}

void House()
{
    glClear(GL_COLOR_BUFFER_BIT);

    /*glBegin(GL_LINES);
        glColor3f(1,1,1);
        glVertex2i(-9,0);
        glVertex2i(9,0);

        glVertex2i(0,-9);
        glVertex2i(0,9);
    glEnd();*/

    /*glBegin(GL_LINE_STRIP);
        glColor3f(1,0,0);
        glVertex2i(0,9);
        glVertex2i(9,9);
        glVertex2i(9,0);
        glVertex2i(0,-9);
    glEnd();*/

    /*glBegin(GL_LINE_LOOP);
        glColor3f(1,0,0);
        glVertex2i(0,9);
        glVertex2i(9,9);
        glVertex2i(9,0);
        glVertex2i(0,-9);
    glEnd();*/


    /*glBegin(GL_TRIANGLES);
         //upper triangle
         glColor3f(1,0,0);
         glVertex2i(0,9);
         glVertex2i(9,0);
         glVertex2i(-9,0);

         //lower triangle
         glColor3f(1,0,0);
         glVertex2i(0,-9);
         glVertex2i(9,0);
         glVertex2i(-9,0);
    glEnd();*/

    /*glBegin(GL_TRIANGLE_STRIP);
         //left triangle
         glColor3f(1,0,0);
         glVertex2i(-6,9);
         glVertex2i(-9,0);
         glVertex2i(0,0);

         //right triangle
         glColor3f(1,0,0);
         glVertex2i(6,9);
         glVertex2i(9,0);
         glVertex2i(0,0);
    glEnd();*/

    /*glBegin(GL_TRIANGLE_FAN);

         glColor3f(1,0,0);

         //left triangle
         glVertex2i(0,0);
         glVertex2i(-6,9);
         glVertex2i(-9,0);

         //right triangle
         glColor3f(1,0,1);
         glVertex2i(0,0);
         glVertex2i(6,9);
         glVertex2i(9,0);

        //bottom right triangle
         glColor3f(0,0,1);
         glVertex2i(0,0);
         glVertex2i(0,-9);
         glVertex2i(9,-9);
    glEnd();*/

    /*glBegin(GL_QUADS);
         glColor3f(0,0,1);
         glVertex2i(-9,9);
         glVertex2i(0,9);
         glVertex2i(0,0);
         glVertex2i(-9,0);
    glEnd();*/

    /*glColor3f(0,0,1);
    glRectf(-9,9,0,0);*/

   /*glBegin(GL_QUAD_STRIP);
         glColor3f(0,0,1);
         glVertex2i(-9,0);
         glVertex2i(-9,9);
         glVertex2i(0,0);
         glVertex2i(0,9);
         glVertex2i(9,0);
         glVertex2i(9,9);
    glEnd();*/


    glBegin(GL_POLYGON);
         glColor3f(0,0,1);
         glVertex2i(0,0);
         glVertex2i(9,9);
         glVertex2i(9,-9);
         glVertex2i(-9,-9);
         glVertex2i(-9,9);
    glEnd();


    glFlush();
}


int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(200,150);
    glutCreateWindow("Basic Shapes");
    init();
    glutDisplayFunc(House);
    glutMainLoop();
    return 0;
}
