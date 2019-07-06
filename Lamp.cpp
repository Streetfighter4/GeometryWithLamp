//
// Created by yasen on 7/2/19.
//

#include "Lamp.h"

Lamp::Lamp(double newEdgeLength, double newAngle, double newBlendEdgeLength) : edgeLength(validEdgeLength(newEdgeLength)),
                angle(validAngle(newAngle)), blend(newBlendEdgeLength, edgeLength) {

    //blend.print();
    blend.setPointsByAngle(angle);
}

void Lamp::print() const {
    blend.print();
}

double Lamp::validEdgeLength(double newEdgeLength) {
    if(newEdgeLength < 10.0) {
        return 10.0;
    } else if (newEdgeLength > 25.0){
        return 25.0;
    } else {
        return newEdgeLength;
    }
}

double Lamp::validAngle(double newAngle) {
    if(newAngle > 60.0) {
        return  60.0;
    } else if(newAngle < -60.0) {
        return  -60.0;
    } else {
        return newAngle;
    }
}

void Lamp::intersectionPointsWith(const Plane& plane) {
    blend.intersectionPointsWith(plane);
}
