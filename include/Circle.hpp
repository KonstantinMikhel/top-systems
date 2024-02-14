#pragma once

#include <math.h>
#include <GL/glut.h>
#include "Point.hpp"
#include "Shape.hpp"

namespace shapesdraw {

class Circle : public Shape {
private:
    Point center;
    double radius;

public:
    Circle(const Point& center, double radius)
        : center{center}, radius{radius} 
    {}

    void draw() const override {
        auto x{center.x};
        auto y{center.y};
        glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i <= 20; i++) {
            glVertex2d(
                x + radius * cos(i * 2 * M_PI / 20),
                y + radius * sin(i * 2 * M_PI / 20)
            );
        }
        glEnd();  // GL_TRIANGLE_FAN
    }
};

}  // namespace shapesdraw