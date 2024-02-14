#pragma once

#include "Shape.hpp"
#include "Point.hpp"
#include "Polygon.hpp"

namespace shapesdraw {

class Rectangle : public Polygon {
private:
    Point center;
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height)
        : Polygon(), center{center}, width{width}, height{height}
    {
        auto x{center.x};
        auto y{center.y};
        vertices.push_back(Point{x - width / 2, y - height / 2});
        vertices.push_back(Point{x + width / 2, y - height / 2});
        vertices.push_back(Point{x + width / 2, y + height / 2});
        vertices.push_back(Point{x - width / 2, y + height / 2});   
    }
    void draw() const override {
        glBegin(GL_QUADS);
        for (auto v : vertices) { 
            glVertex2d(v.x, v.y);
        }
        glEnd();
    }
};

}  // namespace shapesdraw