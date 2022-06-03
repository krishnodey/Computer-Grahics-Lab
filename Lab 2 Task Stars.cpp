#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void init()
{
    glClearColor(.95,.95,.95,1);
    glOrtho(-15,15,-15,15,-15,15);
}

void displayStars()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //left
    glColor3d(.80, .6, 0.80);
    glRectf(2.0, .75, 3.0, -.75);

    //right
    glColor3d(.90, .5, 0.90);
    glRectf(-2.0, .75, -3.0, -.75);

    //top
    glColor3d(.80, .09, 0.20);
    glRectf(.5, 2.5, -.5, 4);

    //bottom
    glColor3d(.80, .06, 0.50);
    glRectf(.5, -2.5, -.5, -4);



    glBegin(GL_TRIANGLES);
        //right star
        glColor3d(.50, .70, 0);
        glVertex3d(0, 0, 0);
        glColor3d(.1, .4, .2);
        glVertex3d(2, .75, 0);
        glColor3d(.50, .0, 0);
        glVertex3d(2, -.75, 0);

        glVertex3d(2.5, -3.5, 0);
        glColor3d(.20, .03, 0);
        glVertex3d(2, -.75, 0);
        glColor3d(.90, .70, 0.60);
        glVertex3d(3, -.75, 0);

        glVertex3d(5, 0, 0);
        glColor3d(.2, .70, 0.8);
        glVertex3d(3, .75, 0);
        glColor3d(.90, .20, 0);
        glVertex3d(3, -.75, 0);


        glVertex3d(2.5, 3.5, 0);
        glColor3d(.50, .70, 1);
        glVertex3d(2, .75, 0);
        glColor3d(.0, .70, 0);
        glVertex3d(3, .75, 0);

        //left star
        glColor3d(.50, .70, 0);
        glVertex3d(0, 0, 0);
        glColor3d(.1, .4, .2);
        glVertex3d(-2, .75, 0);
        glColor3d(.50, .0, 0);
        glVertex3d(-2, -.75, 0);

        glVertex3d(-2.5, -3.5, 0);
        glColor3d(.20, .03, 0);
        glVertex3d(-2, -.75, 0);
        glColor3d(.90, .70, 0.60);
        glVertex3d(-3, -.75, 0);

        glVertex3d(-5, 0, 0);
        glColor3d(.2, .70, 0.8);
        glVertex3d(-3, .75, 0);
        glColor3d(.90, .20, 0);
        glVertex3d(-3, -.75, 0);


        glVertex3d(-2.5, 3.5, 0);
        glColor3d(.50, .20, 1);
        glVertex3d(-2, .75, 0);
        glColor3d(.0, .20, 0.50);
        glVertex3d(-3, .75, 0);

        //top star glRectf(.5, 2.5, -.5, 4);

        glColor3d(.50, .70, 0);
        glVertex3d(0, 0, 0);
        glColor3d(.9, .2, .2);
        glVertex3d(-.5, 2.5, 0);
        glColor3d(.50, 1.0, .10);
        glVertex3d(.5, 2.5, 0);

        glVertex3d(0, 7, 0);
        glColor3d(1, .30, 1);
        glVertex3d(-.5, 4, 0);
        glColor3d(1.0, .100, 0.60);
        glVertex3d(.5, 4, 0);

        glVertex3d(-2.5, 3.5, 0);
        glColor3d(.8, .90, 0.8);
        glVertex3d(-.5, 2.5, 0);
        glColor3d(.30, .90, 0.4);
        glVertex3d(-.5, 4, 0);


        glVertex3d(2.5, 3.5, 0);
        glColor3d(.30, .90, 1);
        glVertex3d(.5, 2.5, 0);
        glColor3d(1.0, .90, 0.50);
        glVertex3d(.5, 4, 0);



        //bottom star glRectf(.5, -2.5, -.5, -4);

        glColor3d(.50, .70, 0);
        glVertex3d(0, 0, 0);
        glColor3d(.9, .9, .9);
        glVertex3d(-.5, -2.5, 0);
        glColor3d(.50, 1.0, .10);
        glVertex3d(.5, -2.5, 0);

        glVertex3d(0, -7, 0);
        glColor3d(1, .30, 1);
        glVertex3d(.5, -4, 0);
        glColor3d(1.0, .100, 0.60);
        glVertex3d(-.5, -4, 0);

        glVertex3d(-2.5, -3.5, 0);
        glColor3d(.8, .70, 0.8);
        glVertex3d(-.5, -2.5, 0);
        glColor3d(.30, .90, 0.4);
        glVertex3d(-.5, -4, 0);


        glVertex3d(2.5, -3.5, 0);
        glColor3d(.30, .90, 1);
        glVertex3d(.5, -2.5, 0);
        glColor3d(1.0, .90, 0.50);
        glVertex3d(.5, -4, 0);











    glEnd();
   glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(90,0);
    glutCreateWindow("Stars");
    init();
    glutDisplayFunc(displayStars);
    glutMainLoop();
    return 0;
}

/*krishno dey 171-15-9417*/
