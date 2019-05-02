//
// Created by Admin on 02/05/2019.
//
#include "ArrayClass.h"
#include <gtest/gtest.h>

TEST(RotaterTest, testTheRotationWithThreeRowsAndColums){

    std::vector<std::vector<int>> sampleInput = {
                                                    {1, 2, 3},
                                                    {4, 5, 6},
                                                    {7, 8, 9}
                                                };

    std::vector<std::vector<int>> expectedOutput = {
                                                        {7, 4, 1},
                                                        {8, 5, 2},
                                                        {9, 6, 3}
                                                    };

    ASSERT_EQ(rotatedMatrix(sampleInput), expectedOutput);
}
TEST(RotaterTest, testTheRotationWithTwoRowsAndColums){

    std::vector<std::vector<int>> sampleInput = {
                                                     {1, 2},
                                                     {3, 4},
                                                };
    std::vector<std::vector<int>> expectedOutput = {
                                                        {3, 1},
                                                        {4, 2},
                                                    };
    ASSERT_EQ(rotatedMatrix(sampleInput), expectedOutput);

}

TEST(RotaterTest, testTheRotationWithFour){

    std::vector<std::vector<int>> sampleInput = {
                                                        { 1, 2, 3, 4 },
                                                        { 5, 6, 7, 8 },
                                                        { 9, 10, 11, 12},
                                                        { 13, 14, 15, 16}
                                                };

    std::vector<std::vector<int>> expectedOutput = {
                                                        { 13, 9, 5, 1},
                                                        { 14, 10, 6, 2},
                                                        { 15, 11, 7, 3},
                                                        { 16, 12, 8, 4}
                                                    };

    ASSERT_EQ(rotatedMatrix(sampleInput), expectedOutput);

}