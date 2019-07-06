//
// Created by yasen on 7/2/19.
//

#ifndef GEOMETRY_LAMP_H
#define GEOMETRY_LAMP_H


#include "Blend.h"
#include "Plane.h"

class Lamp {
    double edgeLength;
    double angle;

    Blend blend;
public:
    explicit Lamp(double newEdgeLength = 10.0, double newAngle = 0.0, double blendEdgeLength = 0.0);
    void print() const;
    void intersectionPointsWith(const Plane& plane);

private:
    double validEdgeLength(double newEdgeLength);
    double validAngle(double newAngle);
};


#endif //GEOMETRY_LAMP_H
