#pragma once

#include <utility>
#include <GL/glut.h>
#include "Polygon.hpp"

namespace shapesdraw {

class Triangle : public Polygon {
public:
    Triangle(std::vector<Point>&& vertices)
        : Polygon{std::move(vertices)}
    {}
};

}  // namespace shapesdraw