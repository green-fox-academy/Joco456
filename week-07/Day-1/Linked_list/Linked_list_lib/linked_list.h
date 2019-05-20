//
// Created by Admin on 20/05/2019.
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_t
{
    int data;
    struct linked_list_t *next;
} linked_list_t;

linked_list_t* createLinkedListNode(int data);
void append(linked_list_t *head, int data);
void prepend(linked_list_t *head, int data);
void insert_after(linked_list_t *head, int data, linked_list_t *after);
int size(linked_list_t *head);
int isEmpty(linked_list_t *head);
void deleteAtIndex(linked_list_t *head, int index);
linked_list_t *search(linked_list_t *head, int value);
int getData(linked_list_t *head, int index);


#endif //LINKED_LIST_LINKED_LIST_H
