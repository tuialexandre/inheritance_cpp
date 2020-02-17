#ifndef CIRCLE_H
#define CIRCLE_H

#include "polygon.h"
#include <math.h>

class Circle : public Polygon {
    float radius;
public:
    Circle(const float &r) {
        radius = r;
    }
    ~Circle(){}
    float area();
};

#endif