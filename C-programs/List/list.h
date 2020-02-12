#ifndef __LIST__ 
#define __LIST__ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "employee.h"

typedef struct node
{
	void *data;
	struct node *next;
}Node;

typedef struct linkedlist
{
	Node *head;
	Node *tail;
	Node *current; //traverse linked list
}Linkedlist;

//initialize the linked list
void initialiazelist(Linkedlist*);

//adds data to the linked lists head
void addHead(Linkedlist*,void*);

//adds data to the linked list tail
void addTail(Linkedlist*,void*);

//removes a node from the linked list
void delete(Linkedlist*,Node*);

//returns a pointer to the node containing a specific data item
Node *getNode(Linkedlist*,COMPARE,void*);

//displays the linked list
void displayLinkedList(Linkedlist*,DISPLAY);

#endif