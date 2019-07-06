//
// Created by yasen on 7/2/19.
//

#include "Lamp.h"

Lamp::Lamp(double newEdgeLength, double newAngle, double newBlendEdgeLength) {
    if(newEdgeLength < 10.0) {
        edgeLength = 10.0;
    } else if (newEdgeLength > 25.0){
        edgeLength = 25.0;
    } else {
        edgeLength = newEdgeLength;
    }
    if(newBlendEdgeLength <= edgeLength) {
        blend.setEdgeLength(newBlendEdgeLength);
    } else {
        blend.setEdgeLength(edgeLength);
    }

    if(newAngle > 60.0) {
        angle = 60.0;
    } else if(newAngle < -60.0) {
        angle = -60.0;
    } else {
        angle = newAngle;
    }
    blend.setStartCoordOnPoints(edgeLength);
    blend.print();
    blend.setPointsByAngle(angle);
}

void Lamp::print() const {
    blend.print();
}
