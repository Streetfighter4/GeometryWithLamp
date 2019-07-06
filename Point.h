//
// Created by yasen on 7/2/19.
//

#ifndef GEOMETRY_POINT_H
#define GEOMETRY_POINT_H

#include <iostream>

class Point {

public:
    double x, y, z;
    double PCLength;
    double PCAngle;
    Point();
    void print() const;
};


#endif //GEOMETRY_POINT_H
