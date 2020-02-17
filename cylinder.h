#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

class Cylinder : public Circle {
    float height;
public:
    Cylinder(const float &h, const float &r);
    ~Cylinder() {}
    float volume();
};

#endif