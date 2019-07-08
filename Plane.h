//
// Created by yasen on 7/6/19.
//

#ifndef GEOMETRY_PLANE_H
#define GEOMETRY_PLANE_H


#include <vector>
#include "Point.h"

class Plane {

public:
    double a, b, c, d;
    explicit Plane(double distance);
};


#endif //GEOMETRY_PLANE_H
