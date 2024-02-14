#include "Polygon.hpp"

using namespace shapesdraw;

Polygon::Polygon(const std::vector<Point>& vertices)
    : vertices{vertices}
{}

template<typename... Args>
Polygon::Polygon(Args&&... args)
    : vertices{std::forward<Args>(args)...}
{}