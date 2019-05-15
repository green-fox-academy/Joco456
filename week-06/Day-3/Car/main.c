#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
	enum car_type type;
	double km;
	double gas;
};
void carStats(struct car *car);
const char* get_car_name(enum car_type carType);
int main()
{
    struct car car1;
    struct car car2;

    car1.type = LAND_ROVER;
    car1.gas = 22.3;
    car1.km = 12345.65;

    car2.type = TESLA;
    car2.gas = 0;
    car2.km = 3132.56;

    carStats(&car1);
    carStats(&car2);

	return 0;
}
void carStats(struct car *car)
{
    if (car->type != TESLA)
        printf("Type: %s, km: %.2f gas: %.2f\n", get_car_name(car->type), car->km, car->gas);
    else
        printf("Type: %s, km: %.2f\n", get_car_name(car->type), car->km);
}
const char* get_car_name(enum car_type carType)
{
    switch (carType)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land Rover";
        case TESLA: return "Tesla";
    }
}
