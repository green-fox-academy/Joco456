//
// Created by Admin on 25/04/2019.
//
#include <gtest/gtest.h>
#include "myClass.h"

TEST(AppleTest, AppleTestReturnTest){

    //Arrange
    myClass ob1;

    //Act
    std::string apple = ob1.getApple();

    //Assert
    ASSERT_EQ(apple, "apple");
}




