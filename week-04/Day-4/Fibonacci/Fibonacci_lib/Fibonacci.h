//
// Created by Admin on 25/04/2019.
//

#ifndef FIBONACCI_FIBONACCI_H
#define FIBONACCI_FIBONACCI_H


#include <stdexcept>

class Fibonacci {

public:

    int fib(int n) {
        if (n > 0) {
            if (n <= 1)
                return n;
            return fib(n - 1) + fib(n - 2);
        } else {
            throw std::invalid_argument("received negative value");
        }

    }


};


#endif //FIBONACCI_FIBONACCI_H
