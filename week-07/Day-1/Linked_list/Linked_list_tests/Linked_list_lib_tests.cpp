//
// Created by Admin on 20/05/2019.
//
#include "gtest/gtest.h"

extern "C" {
#include "linked_list.h"
}

TEST(Linked_list_test, TestingTheAppendFunction){

   linked_list_t *head = createLinkedListNode(0);

    append(head, 1);
    append(head, 3);
    append(head, 5);

    int expectedResult = 5;

    ASSERT_EQ(getData(head, 3), expectedResult);

}

TEST(Linked_list_test, TestingThePrependFunction){

    linked_list_t *head = createLinkedListNode(0);
    append(head, 1);
    append(head, 3);
    append(head, 5);

    prepend(head, 2);

    int expectedResult = 2;

    ASSERT_EQ(getData(head, 1), expectedResult);
}
