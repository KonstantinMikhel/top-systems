#pragma once

namespace shapesdraw {

struct Color {
    double red;
    double green;
    double blue;
    double alpha;

    Color()
        : red{1.0}, green{1.0}, blue{1.0}, alpha{1.0} 
    {}

    Color(double r, double g, double b, double alpha)
        : red{r}, green{g}, blue{b}, alpha{alpha}
    {}
    
    Color(double r, double g, double b)
        : red{r}, green{g}, blue{b}, alpha{1.0}
    {}
};

}  // namespace shapesdraw 