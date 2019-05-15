#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer1;
    computer1.cpu_speed_GHz = 2.4;
    computer1.ram_size_GB = 4;
    computer1.bits = 32;

    Notebook notebook1;
    notebook1.cpu_speed_GHz = 3;
    notebook1.ram_size_GB = 6;
    notebook1.bits = 64;

    printf("The computer has %.2f CPU speed, %d GB RAM, %d bits\n", computer1.cpu_speed_GHz, computer1.ram_size_GB, computer1.bits);
    printf("The notebook has %.2f CPU speed, %d GB RAM, %d bits\n", notebook1.cpu_speed_GHz, notebook1.ram_size_GB, notebook1.bits);


    return 0;
}