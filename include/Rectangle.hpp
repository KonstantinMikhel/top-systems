#pragma once

#include "Shape.hpp"
#include "Point.hpp"

namespace shapesdraw {

class Rectangle : public Shape {
private:
    Point center;
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height) 
        : center(center), width(width), height(height)
    {}

    void draw() const override {
        auto x{center.x};
        auto y{center.y};

        glBegin(GL_QUADS);

        glVertex2d(x - width / 2, y - height / 2);
        glVertex2d(x + width / 2, y - height / 2);
        glVertex2d(x + width / 2, y + height / 2);
        glVertex2d(x - width / 2, y + height / 2);
        
        glEnd();
    }
};

}  // namespace shapesdraw