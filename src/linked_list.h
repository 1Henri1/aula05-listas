#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "element.h"

typedef struct LinkedList linkedlist;

LinkedList* list_create(void);
void list_destroy(LinkedList* list);
void list_insert_first(LinkedList* list, Element element);
void list_print(LinkedList* list);

#endif