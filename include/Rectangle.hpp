#pragma once

#include <GL/glut.h>
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
        : center{center}, width{width}, height{height}
    {
        auto x{center.x};
        auto y{center.y};
        vertices.push_back(Point{x - width / 2, y - height / 2});
        vertices.push_back(Point{x + width / 2, y - height / 2});
        vertices.push_back(Point{x + width / 2, y + height / 2});
        vertices.push_back(Point{x - width / 2, y + height / 2});   
    }
};

}  // namespace shapesdraw