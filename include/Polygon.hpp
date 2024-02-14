#pragma once

#include <vector>
#include <utility>

#include "Shape.hpp"
#include "Point.hpp"

namespace shapesdraw {

class Polygon : public Shape {
protected:
    std::vector<Point> vertices;

public:
    Polygon(std::vector<Point>&& vertices)
        : vertices{std::move(vertices)}
    {}
    
    template<typename... Args>
    Polygon(Args&&... args)
        : vertices{std::forward<Args>(args)...}
    {}

    void draw() const override {
        glBegin(GL_POLYGON);
        for (const auto& vertex : vertices) {
            glVertex2d(vertex.x, vertex.y);
        }
        glEnd();  // GL_POLYGON
    }
};

}  // shapesdraw 
