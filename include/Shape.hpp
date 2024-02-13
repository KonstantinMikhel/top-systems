#pragma once

#include "Point.hpp"

namespace shapesdraw {

class Shape {
protected:
    Point center;

public:
    explicit Shape(const Point& c) : center(c) {}
    virtual void draw() const = 0;
};

}  // namespace shapesdraw