#include "Lamp.h"

int main() {
    double edgeLength, angle, blendEdgeLength, distanceToFloor;
    std::cout << "Enter length of lamp(between 10sm and 25sm)" << std::endl;
    std::cin >> edgeLength;

    std::cout << "Enter distance to floor(between 260sm and 480sm)" << std::endl;
    std::cin >> distanceToFloor;

    std::cout << "Enter length of blend(between 0 sm and " << edgeLength << "sm" << std::endl;
    std::cin >> blendEdgeLength;

    std::cout << "Enter angle(between -60degree and +60degree)" << std::endl;
    std::cin >> angle;

    Lamp lamp(edgeLength, angle, blendEdgeLength);
    //lamp.print();
    Plane plane(distanceToFloor);
    lamp.intersectionPointsWith(plane);
    return 0;
}