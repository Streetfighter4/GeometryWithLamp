//
// Created by yasen on 7/6/19.
//

#ifndef GEOMETRY_PLANE_H
#define GEOMETRY_PLANE_H


class Plane {
    double a, b, c, d;
public:
    explicit Plane(double distance);
    double getD() const ;
};


#endif //GEOMETRY_PLANE_H
