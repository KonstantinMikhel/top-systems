#include <GL/glut.h>

#include "Point.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include "Polygon.hpp"

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

    Rectangle rectangle{ Point{200, 300}, 100, 50 };
    rectangle.draw();

    Square square{ Point{400, 500}, 75 };
    square.draw();

    std::vector<Point> triangle_vertices{
        {600, 100},
        {500, 200},
        {700, 300}, 
    };
    Triangle triangle{std::move(triangle_vertices)};
    triangle.draw();
    
    Circle circle{ Point{400, 300}, 60 };
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