//
// Created by yasen on 7/6/19.
//

#include "Plane.h"

Plane::Plane(double distance) : a(0), b(0), c(1), d(distance) {}

double Plane::getD() const {
    return d;
}
