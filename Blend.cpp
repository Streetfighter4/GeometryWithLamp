//
// Created by yasen on 7/2/19.
//

#include "Blend.h"

Blend::Blend() : edgeLength(0){}

void Blend::setPointsByAngle(double angle) {
    std::cout << "ANGLE: " << angle << std::endl;
    center1.PCAngle += angle;
    center2.PCAngle += angle;

    double halfLengthOnBlend = edgeLength/2;

    center1.x = center1.PCLength*cos(center1.PCAngle);
    center1.z = center1.PCLength*sin(center1.PCAngle);

    center2.x = center2.PCLength*cos(center2.PCAngle);
    center2.z = center2.PCLength*sin(center2.PCAngle);

    a.x = center1.x;
    a.y = halfLengthOnBlend;
    a.z = center1.z;

    b.x = center2.x;
    b.y = halfLengthOnBlend;
    b.z = center2.z;

    c.x = center2.x;
    c.y = -halfLengthOnBlend;
    c.z = center2.z;

    d.x = center1.x;
    d.y = -halfLengthOnBlend;
    d.z = center1.z;

}

void Blend::setStartCoordOnPoints(double edgeLamp) {
    double heightLamp = edgeLamp/sqrt(2);

    double halfLengthOnBlend = edgeLength/2;

    center1.x =  -halfLengthOnBlend;
    center1.y = 0;
    center1.z = heightLamp;
    center1.PCLength = sqrt(center1.x * center1.x + center1.z * center1.z);
    center1.PCAngle = (atan(center1.z / center1.x) * 180) / PI;

    center2.x = halfLengthOnBlend;
    center2.y = 0;
    center2.z = heightLamp;
    center2.PCLength = sqrt(center2.x * center2.x + center2.z * center2.z);
    center2.PCAngle = (atan(center2.z / center2.x) * 180) / PI;

}

void Blend::print() const {
    std::cout << "A:" << std::endl;
    a.print();
    std::cout << "B:" << std::endl;
    b.print();
    std::cout << "C:" << std::endl;
    c.print();
    std::cout << "D:" << std::endl;
    d.print();
    std::cout << "Center1:" << std::endl;
    center1.print();
    std::cout << "Center2:" << std::endl;
    center2.print();
    std::cout << std::endl;
}
