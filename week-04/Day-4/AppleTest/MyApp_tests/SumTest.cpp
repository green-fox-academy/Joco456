//
// Created by Admin on 25/04/2019.
//

#include <gtest/gtest.h>
#include "myClass.h"

TEST(sumTest, sumTestwithElements){

    std::vector<int> numberList = {1, 2, 3};

    myClass ob2;
    int result = ob2.sum(numberList);


    ASSERT_EQ(result, 6);

}

TEST(sumTest, sumWithEmptyList){

    std::vector<int> numberList;

    myClass ob3;
    int result = ob3.sum(numberList);

    ASSERT_EQ(result, 0);
}

TEST(sumTest, sumWitOneElement){

    std::vector<int> numberList ={1};

    myClass ob4;
    int result = ob4.sum(numberList);

    ASSERT_EQ(result, 1);
}

TEST(sumTest, sumWithNegativeSum){

    std::vector<int> numberList = {1, -2};

    myClass ob3;
    int result = ob3.sum(numberList);

    ASSERT_EQ(result, -1);
}

