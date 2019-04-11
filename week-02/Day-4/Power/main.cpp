#include <iostream>
//Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n power
int calculator (int a, int b);

int main() {
    int base = 3;
    int power = 2;
    std::cout << "the value of " << base << " to the " << power << " power is: " << calculator(base,power) << std::endl;
    return 0;
}
int calculator (int a, int b){
    if (b > 0){
        return a*calculator(a, b-1);}
    else{
        return 1;
    }


}