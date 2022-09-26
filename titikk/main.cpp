#include <windows.h>
#include <GL/glut.h>

void display1(void) {
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(212,0,0);
    glPointSize(5.0f);
    glBegin(GL_POINTS);
        glVertex2f(-0.5,0.5);
        glVertex2f(-0.5,0.0);
        glVertex2f(-0.5,-0.5);

        glVertex2f(0.0,0.5);
        glVertex2f(0.0,0.0);
        glVertex2f(0.0,-0.5);

        glVertex2f(0.5,0.5);
        glVertex2f(0.5,0.0);
        glVertex2f(0.5,-0.5);
    glEnd();
    glFlush();

}

int main (int argc, char** argv) {
    glutInit(&argc,argv);
    glutCreateWindow("nomor 2");
    glutInitWindowSize(640,480);
    glutDisplayFunc(display1);
    glutMainLoop();
    return 0;
}
