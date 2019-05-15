#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/
typedef struct point
{
    float x;
    float y;
} point_t;

point_t create_point(float x, float y);
float distance(point_t p1, point_t p2);

int main()
{

    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5);
    float dist = distance(p1, p2);
    printf("%f", dist);

    return 0;
}
point_t create_point(float x, float y)
{
    point_t result;
    result.x = x;
    result.y = y;

    return result;
}
float distance(point_t p1, point_t p2)
{
    float distance = sqrtf((powf((p2.x - p1.x), 2)) + (powf((p2.y - p1.y), 2)));
    return distance;
}