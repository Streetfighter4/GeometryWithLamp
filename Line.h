//
// Created by yasen on 7/6/19.
//

#ifndef GEOMETRY_LINE_H
#define GEOMETRY_LINE_H


#include "Point.h"
#include "Plane.h"

class Line {
    Point p1, p2;
public:
    Line();
    void setPoint(const Point& newP1, const Point& newP2);
    void intersectionPointWith(const Plane& plane);
};


#endif //GEOMETRY_LINE_H
