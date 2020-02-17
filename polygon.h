#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon() {}
    virtual ~Polygon() {}

    virtual float area() = 0;
};

#endif