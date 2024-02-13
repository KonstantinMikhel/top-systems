#pragma once

#include "Shape.hpp"

namespace shapesdraw {

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height) 
        : Shape(center), width(width), height(height)
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