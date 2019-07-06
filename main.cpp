#include "Lamp.h"

int main() {
    Lamp lamp(20, -50, 10);
    //lamp.print();
    Plane plane(360);
    lamp.intersectionPointsWith(plane);
    return 0;
}