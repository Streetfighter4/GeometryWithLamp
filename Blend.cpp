//
// Created by yasen on 7/2/19.
//

#include "Blend.h"

Blend::Blend(double newBlendEdgeLength, double edgeLamp) {
    if(newBlendEdgeLength <= edgeLamp) {
        edgeLength = newBlendEdgeLength;
    } else {
        edgeLength = edgeLamp;
    }

    double heightLamp = edgeLamp/sqrt(2);

    double halfLengthOnBlend = edgeLength/2;

    center1.x =  -halfLengthOnBlend;
    center1.y = 0;
    center1.z = heightLamp;
    center1.PCLength = sqrt(center1.x * center1.x + center1.z * center1.z);
    center1.PCAngle = atan(center1.z / center1.x);

    center2.x = halfLengthOnBlend;
    center2.y = 0;
    center2.z = heightLamp;
    center2.PCLength = sqrt(center2.x * center2.x + center2.z * center2.z);
    center2.PCAngle = atan(center2.z / center2.x);

}

void Blend::setPointsByAngle(double angle) {
    std::cout << "ANGLE: " << angle << std::endl;
    center1.PCAngle += angle;
    center2.PCAngle += angle;

    double halfLengthOnBlend = edgeLength/2;
    Point start(0, 0, 0);

    center1.x = center1.PCLength*sin(center1.PCAngle*PI/180);
    center1.z = center1.PCLength*cos(center1.PCAngle*PI/180);

    center2.x = center2.PCLength*sin(center2.PCAngle*PI/180);
    center2.z = center2.PCLength*cos(center2.PCAngle*PI/180);

    a.x = center1.x;
    a.y = halfLengthOnBlend;
    a.z = center1.z;
    lines[0].setPoint(start, a);

    b.x = center2.x;
    b.y = halfLengthOnBlend;
    b.z = center2.z;
    lines[1].setPoint(start, b);

    c.x = center2.x;
    c.y = -halfLengthOnBlend;
    c.z = center2.z;
    lines[2].setPoint(start, c);

    d.x = center1.x;
    d.y = -halfLengthOnBlend;
    d.z = center1.z;
    lines[3].setPoint(start, d);
}

void Blend::intersectionPointsWith(const Plane& plane) {
    for (int i = 0; i < 4; ++i) {
        std::cout << "Point " << i+1 << std::endl;
        lines[i].intersectionPointWith(plane);
    }
}
