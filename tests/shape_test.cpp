#include <GL/glut.h>

#include "Point.hpp"
#include "Rectangle.hpp"


constexpr auto Width{800};
constexpr auto Height{600};

void init() {
    // Set clear color to white
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Set up 2D orthographic projection
    gluOrtho2D(0, Width, 0, Height);
}

void display() {
    using namespace shapesdraw;
    // Clear the color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    // Set color to green
    glColor3f(0.0, 1.0, 0.0);

    auto center{Point{200, 300}};
    auto rectangle{Rectangle{center, 100, 50}};
    rectangle.draw();

    // Flush OpenGL buffer
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(Width, Height);
    glutCreateWindow("Shapes Test");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}