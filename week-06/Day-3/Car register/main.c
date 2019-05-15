#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */
typedef enum {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH,
} transmission;

typedef struct car {
    char manufacturer[256];
    float price;
    int yearOfManufactured;
    transmission typeOfTransmission;

} car_t;

int get_older_cars_than(car_t car[], int array_length, int age);

int get_transmission_count(car_t car[], int array_length, transmission trnsm);

int main() {
    car_t car1;
    car_t car2;

    car1.typeOfTransmission = AUTOMATIC;
    car1.yearOfManufactured = 2004;
    car2.typeOfTransmission = MANUAL;
    car2.yearOfManufactured = 1989;

    car_t car[] = {car1, car2};
    int length = sizeof(car) / sizeof(car_t);

    printf("%d\n", get_older_cars_than(car, length, 20));
    printf("%d\n", get_transmission_count(car, length, MANUAL));

    return 0;
}

int get_older_cars_than(car_t car[], int array_length, int age) {
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (2019 - car[i].yearOfManufactured > age)
            counter++;
    }
    return counter;
}

int get_transmission_count(car_t car[], int array_length, transmission trnsm) {
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (car[i].typeOfTransmission == trnsm)
            counter++;
    }

    return counter;

}