#include <iostream>
//Find the greatest common divisor of two numbers using recursion.
int calculator (int a, int b);
int main() {

    int a = 84;
    int b = 18;

    std::cout << "The greatest common divisor of " << a << " and " << b << " is: " << calculator(a,b) << std:: endl;

    return 0;
}
int calculator (int a, int b){
    if (b == 0)
        return a;
    return calculator(b, a % b);

}