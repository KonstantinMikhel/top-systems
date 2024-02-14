#pragma once

#include <vector>

#include "Shape.hpp"
#include "Point.hpp"

namespace shapesdraw {

class Polygon : public Shape {
protected:
    std::vector<Point> vertices;

public:
    Polygon() {}
    Polygon(const std::vector<Point>& vertices);
    template<typename... Args>
    Polygon(Args&&... args);

};

}  // shapesdraw 
