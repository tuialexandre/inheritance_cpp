#include "cylinder.h"
#include <iostream>
#include <memory>

using namespace std;

int main() {
    float base_radius = 0.5;
    float height = 2.0;
    unique_ptr<Polygon> my_circle = make_unique<Circle>(base_radius);
    Cylinder my_cylinder = Cylinder(height, base_radius);

    cout << "Circle area: "<< my_circle->area() << endl;
    cout << "Cylinder volume: "<< my_cylinder.volume() << endl;
    return 0;
}
