#include <stdio.h>
#include <stdlib.h>
#include "Pi.h"

int main()
{
    int circleRadius = 10;

    //areCalculator(circleRadius);
    printf("the area is: %.3f \n", areaCalculator(circleRadius));
    printf("the circumference is: %.3f \n", circumferenceCalculator(circleRadius));

    return 0;
}

