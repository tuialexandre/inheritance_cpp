#include "cylinder.h"
#include <iostream>

using namespace std;

int main() {
    float base_radious = 0.5;
    float height = 2.0;
    Polygon * my_circle = new Circle(base_radious);
    Cylinder my_cylinder = Cylinder(height, base_radious);

    cout << "Circle area: "<< my_circle->area() << endl;
    cout << "Cylinder volume: "<< my_cylinder.volume() << endl;
    return 0;
}