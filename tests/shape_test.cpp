#include <GL/glut.h>

#include "Point.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"


constexpr auto WindowWidth{800};
constexpr auto WindowHeight{600};

void init() {
    // Set clear color to white
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Set up 2D orthographic projection
    gluOrtho2D(0, WindowWidth, 0, WindowHeight);
}

void display() {
    using namespace shapesdraw;
    // Clear the color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    // Set color to green
    glColor3f(0.0, 1.0, 0.0);

    auto center_rect{Point{200, 300}};
    auto rectangle{Rectangle{center_rect, 100, 50}};
    rectangle.draw();

    auto center_sqr{Point{400, 500}};
    auto square{Square{center_sqr, 75}};
    square.draw();

    auto tri_first{Point{600, 100}};
    auto tri_second{Point{500, 200}};
    auto tri_third{Point{700, 300}};
    auto triangle{Triangle{tri_first, tri_second, tri_third}};
    triangle.draw();

    auto center_circ{Point{400, 300}};
    auto circle{Circle{center_circ, 60}};
    circle.draw();

    // Flush OpenGL buffer
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(WindowWidth, WindowHeight);
    glutCreateWindow("Shapes Test");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}