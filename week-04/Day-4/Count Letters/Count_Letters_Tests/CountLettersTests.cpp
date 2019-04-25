//
// Created by Admin on 25/04/2019.
//
#include <gtest/gtest.h>
#include "CountLetters.h"

TEST(CountLetterTest, testWithOneWord){

    std::map<char, int> result;
    CountLetters ob1;
    result = ob1.dictionary("hello");

    ASSERT_EQ(result['h'],1);
    ASSERT_EQ(result['e'],1);
    ASSERT_EQ(result['l'],2);
    ASSERT_EQ(result['o'],1);
}

