#include <iostream>
#include "Flyable.h"
#include "Vehicle.h"
#include "Helicopter.h"
#include "Bird.h"


int main() {

    Helicopter helicopter1;
    helicopter1.takeOff();
    helicopter1.fly();
    helicopter1.land();

    Bird bird("Bird");
    bird.takeOff();
    bird.fly();
    bird.land();



    return 0;
}