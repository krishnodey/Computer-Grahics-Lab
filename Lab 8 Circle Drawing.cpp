#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

void init()
{
    glClearColor(.95,.95,.95,1);
    glOrtho(-800,800,-800,800,-800,800);
}

void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}

void simple_circle()
{
    int i=0, r = 3;
    GLfloat x=0,y=0;

    glBegin(GL_TRIANGLE_FAN);

    for(i=0;i<360;i++)
    {
        x += cos(i*3.14/180)*r;
        y += sin(i*3.14/180)*r;
        glVertex2f(x,y);
    }

    glEnd();
}

void bd_flag()
{
    glColor3f(0,0.7,0);
    glRectf(500,500,-500,-500);


    glColor3f(1,0,0);
    circle(200,300,0,0);

}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //bd_flag();
    glColor3f(1,0,0);
    //simple_circle();
    circle(200,300,0,0);

   glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(90,0);
    glutCreateWindow("Circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

