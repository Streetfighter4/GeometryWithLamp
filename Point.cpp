//
// Created by yasen on 7/2/19.
//

#include <iomanip>
#include "Point.h"

Point::Point(double newX, double newY, double newZ) : x(newX), y(newY), z(newZ), PCAngle(0), PCLength(0) {}

void Point::print() const {
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2) << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
}
