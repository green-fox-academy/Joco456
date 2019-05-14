#include <stdio.h>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

    double a;
    double b;
    double c;

    printf("Enter the size of the 1. side\n");
    scanf("%lf", &a);

    printf("Enter the size of the 2. side\n");
    scanf("%lf", &b);

    printf("Enter the size of the 3. side\n");
    scanf("%lf", &c);

    double surface = 2 * (a * b + b * c + a * c);
    double volume = a * b * c;

    printf("Surface area: %.3lf \n", surface);
    printf("Volume: %.3lf \n", volume);


    return 0;
}