//
// Created by Admin on 25/04/2019.
//
#include <gtest/gtest.h>
#include "Sharpie.h"

class SharpieTest : public ::testing::Test
{
protected:

    void SetUp() override{
        _ob.setinkAmount(100);
    }

    Sharpie _ob;

};

TEST_F(SharpieTest, testingSetColor){

    _ob.setColor("red");

    ASSERT_EQ(_ob.getColor(), "red");
}

TEST_F(SharpieTest, testtingSetInkAmount){

    _ob.setinkAmount(50);

    ASSERT_EQ(_ob.getinkAmount(), 50);
}

TEST_F(SharpieTest, testingUsage){

    _ob.use();
    _ob.use();

    ASSERT_EQ(_ob.getinkAmount(), 98);

}
