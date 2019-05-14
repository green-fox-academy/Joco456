#include <stdio.h>
#include <stdlib.h>

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

#define  PI 3.14

float areCalculator(int radius);
int main()
{
    int circleRadius = 10;

    //areCalculator(circleRadius);
    printf("the are is: %.3f", areCalculator(circleRadius));

    return 0;
}

float areCalculator(int radius){

    int area = radius * radius * PI;
    return area;
}