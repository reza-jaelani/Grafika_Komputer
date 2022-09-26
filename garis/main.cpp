#include <windows.h>
#include <GL/glut.h>

void display1(void) {
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(212,0,0);
    glBegin(GL_LINES);
        glVertex3f(-1.0,0.0,0.0);
        glVertex3f(1.0,0.0,0.0);
    glEnd();
    glFlush();

}

int main (int argc, char** argv) {
    glutInit(&argc,argv);
    glutCreateWindow("nomor 1");
    glutInitWindowSize(640,480);
    glutDisplayFunc(display1);
    glutMainLoop();
    return 0;
}
