#include "cylinder.h"

Cylinder::Cylinder(const float &h, const float &r): Circle(r) {
    height = h;
}

float Cylinder::volume() {
    return area()*height;
}