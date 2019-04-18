#include <iostream>

#include "Fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;

    Thing toDo1 ("Get milk");
    Thing toDo2 ("Remove the obstancles");
    Thing toDo3 ("Stand up");
    Thing toDo4 ("Eat lunch");

    toDo3.complete();
    toDo4.complete();

    fleet.add(toDo1);
    fleet.add(toDo2);
    fleet.add(toDo3);
    fleet.add(toDo4);


    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    std::cout << fleet.toString() << std::endl;
    return 0;
}