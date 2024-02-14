#pragma once

#include <GL/glut.h>
#include "Polygon.hpp"

namespace shapesdraw {

class Triangle : public Polygon {
public:
    Triangle(const Point& first, const Point& second, const Point& third)
        : Polygon()
    {
        vertices.push_back(first);
        vertices.push_back(second);
        vertices.push_back(third);
    }

    void draw() const override {
        glBegin(GL_TRIANGLES);
        for (const auto& vertex : vertices) {
            glVertex2d(vertex.x, vertex.y);
        }
        glEnd();
    }
};

}  // namespace shapesdraw