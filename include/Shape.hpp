#pragma once

#include <iostream>
#include "Point.hpp"
#include "Color.hpp"

namespace shapesdraw {

class Shape {
protected:
    Color color;

public:
    Color get_color() const {
        return color; 
    }

    void set_color(const Color& clr) {
        color = clr;
    }
     
    virtual void draw() const = 0;
};

}  // namespace shapesdraw