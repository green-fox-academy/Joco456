#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/
typedef struct house
{
    char address[30];
    int price;
    int numberOfRooms;
    int area;

} house_t;

int worthToBuy(house_t *house);
void housesWorthToBuy(house_t houses[], int length);
int main()
{
    house_t house1;
    house_t house2;
    house_t house3;

    house1.area = 50;
    house1.price = 18000;

    house2.area = 100;
    house2.price = 38000;

    house3.area = 40;
    house3.price = 17000;

    if (worthToBuy(&house1))
        printf("House 1 worth to buy\n");
    else
        printf("House 1 not worth to buy\n");

    house_t houses[] = {house1, house2, house3};
    int length = sizeof(houses)/ sizeof(house_t);

    housesWorthToBuy(houses, length);

    return 0;
}
int worthToBuy(house_t *house)
{
    int marketPrice = 400 * house->area;

    return (house->price < marketPrice);

}
void housesWorthToBuy(house_t houses[], int length)
{
    int counter = 0;

    for (int i = 0; i < length ; ++i) {
        if (worthToBuy(&houses[i]))
            counter ++;
    }
    printf("Number of houses worth to buy: %d\n", counter);
}