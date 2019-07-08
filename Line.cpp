//
// Created by yasen on 7/6/19.
//

#include "Line.h"

Line::Line() {}

Line::Line(const Point &newP1, const Point& newP2) {
    setPoint(newP1, newP2);
}

void Line::intersectionPointWith(const Plane& plane) {
    double t = plane.d / (p2.z - p1.z);
    Point intersectionPoint(p1.x + p2.x*t, p1.y + p2.y*t, p1.z + p2.z*t);
    intersectionPoint.print();
}

void Line::setPoint(const Point &newP1, const Point &newP2) {
    p1 = newP1;
    p2 = newP2;
}
