//
// Created by Admin on 20/05/2019.
//

#include "linked_list.h"

linked_list_t *createLinkedListNode(int data)
{
    linked_list_t *head = (linked_list_t *)malloc(sizeof(linked_list_t));
    head->data = data;
    head->next = NULL;

    return head;
}

void append(linked_list_t *head, int data)
{
    linked_list_t *new_node = (linked_list_t *)malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next = NULL;

    linked_list_t *it = head;
    while (it->next != NULL) {
        it = it->next;
    }
    it->next = new_node;
}
void prepend(linked_list_t *head, int data)
{
    linked_list_t *new_node = (linked_list_t *)malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next = head->next;

    head->next = new_node;
}
void insert_after(linked_list_t *head, int data, linked_list_t *after)
{
    linked_list_t *new_node = (linked_list_t *)malloc(sizeof(linked_list_t));
    new_node->data = data;

    linked_list_t *it = head;
    while (it->next != after) {
        it = it->next;
    }
    new_node->next = it->next;
    it->next = new_node;
}
int size(linked_list_t *head){

    int size = 0;
    linked_list_t *it = head;
    while (it->next != NULL) {
        it = it->next;
        size++;
    }
    return size;
}
int isEmpty(linked_list_t *head)
{
    if (head->next == NULL)
        return 1;
    else
        return 0;
}
void deleteAtIndex(linked_list_t *head, int index)
{
    linked_list_t *it = head;
    for (int i = 0; i < index -1 ; ++i) {
        it = it->next;
    }

    linked_list_t *itemToDelete = it->next;
    it->next = it->next->next;

    free(itemToDelete);
}
linked_list_t *search(linked_list_t *head, int value)
{
    linked_list_t *result = NULL;
    linked_list_t *it = head;

    while (it->next != NULL) {
        if (it->data == value)
            result = it;

        if (it->next != NULL)
            it = it->next;
    }
    return result;
}
int getData(linked_list_t *head, int index)
{
    int dataAtIndex = 0;
    linked_list_t *it = head;
    for (int i = 0; i < index ; ++i) {
        it = it->next;
    }

    dataAtIndex = it->data;

    return dataAtIndex;
}

