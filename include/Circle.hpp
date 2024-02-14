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
    int n_points;

public:
    Circle(const Point& center, double radius)
        : center{center}, radius{radius}, n_points{20} 
    {}

    void draw() const override {
        auto x{center.x};
        auto y{center.y};
        glColor4d(color.red, color.green, color.blue, color.alpha);
        glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i <= n_points; i++) {
            glVertex2d(
                x + radius * cos(i * 2 * M_PI / n_points),
                y + radius * sin(i * 2 * M_PI / n_points)
            );
        }
        glEnd();  // GL_TRIANGLE_FAN
    }
};

}  // namespace shapesdraw