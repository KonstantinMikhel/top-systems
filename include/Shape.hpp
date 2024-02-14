#pragma once

#include "Point.hpp"

namespace shapesdraw {

class Shape {

public:
    virtual void draw() const = 0;
};

}  // namespace shapesdraw