#pragma once

#include "Rectangle.hpp"

namespace shapesdraw {

class Square : public Rectangle {
public:
    Square(const Point& center, double side_length)
        : Rectangle(center, side_length, side_length)
    {}    
};

}  // namespace shapesdraw