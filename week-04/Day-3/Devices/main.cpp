#include <iostream>
#include "Printer.h"
#include "Printer3D.h"
#include "Copier.h"

#include <vector>

int main() {
    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    // Create a Copier object and invoke copy function on it.

    std::vector<Printer *> printers;

    Printer2D printer2D_1(30, 40);
    Printer2D printer2D_2(35,45);
    Printer2D printer2D_3(40,40);

    Printer3D printer3D_1(30,30,30);
    Printer3D printer3D_2(40,40,40);

    Copier copier(10,20,30);

    printers.push_back(&printer2D_1);
    printers.push_back(&printer2D_2);
    printers.push_back(&printer2D_3);
    printers.push_back(&printer3D_1);
    printers.push_back(&printer3D_2);
    printers.push_back(&copier);

    for (int i = 0; i < printers.size(); ++i) {
        printers[i]->print();
    }

    std::vector<Scanner *> scanners;

    Scanner scanner1(20);
    Scanner scanner2(30);
    Copier copier2(15,30,40);
    Copier copier3(20,30,50);

    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);
    scanners.push_back(&copier2);
    scanners.push_back(&copier3);


    for (int j = 0; j < scanners.size(); ++j) {
        scanners[j]->scan();
    }

    Copier copier4(50,50,20);
    copier4.copy();



    return 0;
}