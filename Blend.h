//
// Created by yasen on 7/2/19.
//

#ifndef GEOMETRY_BLEND_H
#define GEOMETRY_BLEND_H


#include "Point.h"
#include <math.h>

#define PI 3.14159265

class Blend {
    Point a, b, c, d, center1, center2;
    double edgeLength;

public:
    Blend();
    void setEdgeLength(double newEdgeLength) {
        edgeLength = newEdgeLength;
    }
    void setStartCoordOnPoints(double edgeLamp);
    void setPointsByAngle(double angle);

    void print() const;
};


#endif //GEOMETRY_BLEND_H
