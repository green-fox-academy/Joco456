//
// Created by Admin on 13/05/2019.
//

#include <gtest/gtest.h>
#include "GetIndexFunction.cpp"
#include <vector>

TEST(GetIndextTest, testWithValidData){

    std::vector<int> list = {2, 4, 5, 7, 30, 31};

    int expectedValue = 5;

    int result = getIndex(list, 31);

    ASSERT_EQ(result, expectedValue);

}