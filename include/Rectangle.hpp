#include "Shape.hpp"

namespace shapesdraw {

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(const Point& center, double width, double height);
    void draw() const override;
};

}  // namespace shapesdraw