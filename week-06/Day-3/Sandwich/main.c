#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct sandwich
{
    char name[30];
    float price;
    float weight;

} sandwich_t;

int priceCalculator(sandwich_t *sandwich, int value);
int main()
{
    sandwich_t sandwich1;
    sandwich1.price = 10;

    printf("%d", priceCalculator(&sandwich1, 3));
    
    return 0;
}
int priceCalculator(sandwich_t *sandwich, int value)
{
    return sandwich->price * value;
}