//
// Created by yasen on 7/2/19.
//

#ifndef GEOMETRY_BLEND_H
#define GEOMETRY_BLEND_H


#include "Point.h"
#include "Plane.h"
#include "Line.h"
#include <cmath>

#define PI 3.14159265

class Blend {
    Point a, b, c, d, center1, center2;
    Line lines[4];
    double edgeLength;

public:
    explicit Blend(double newBlendEdgeLength, double edgeLamp);
    void setPointsByAngle(double angle);
    void intersectionPointsWith(const Plane& plane);
    void print() const;
};


#endif //GEOMETRY_BLEND_H
