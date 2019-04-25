//
// Created by Admin on 25/04/2019.
//
#include "Fibonacci.h"
#include <gtest/gtest.h>

TEST(FibonacciTest, testWithValidNumber){

    Fibonacci ob1;
    int result = ob1.fib(10);

    ASSERT_EQ(result,55);
}

TEST(FibonacciTest, testWithNegativeNumber){

    Fibonacci ob1;

    ASSERT_ANY_THROW(ob1.fib(-1));
}




