#include <GL/glut.h>

#include "Rectangle.hpp"


namespace shapesdraw {

Rectangle::Rectangle(const Point& center, double width, double height) 
    : Shape(center), width(width), height(height)
{}


void Rectangle::draw() const {
    auto x{center.x};
    auto y{center.y};

    glBegin(GL_QUADS);

    glVertex2d(x - width / 2, y - height / 2);
    glVertex2d(x + width / 2, y - height / 2);
    glVertex2d(x + width / 2, y + height / 2);
    glVertex2d(x - width / 2, y + height / 2);
    
    glEnd();
}

}  // namespace shapesdraw