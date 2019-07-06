//
// Created by yasen on 7/2/19.
//

#include "Point.h"

Point::Point() : x(0), y(0), z(0), PCAngle(0), PCLength(0) {}

void Point::print() const {
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    std::cout << "PCAngle: " << PCAngle << std::endl;
    std::cout << "PCLength: " << PCLength << std::endl;
}
