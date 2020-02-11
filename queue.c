/*Queue implementation from the book:Understanding and Using c pointers */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

typedef struct employee
{
	char name[32];
	unsigned char age;
}Employee;

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
} Linkedlist;

typedef Linkedlist Queue;

//compares two employees
int compareEmployee(Employee *e1,Employee *e2);

//displays a single employee
void displayEmployee(Employee* Employee);

typedef void(*DISPLAY)(void*);

typedef int(*COMPARE)(void*, void*);

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

//initialize the queue
void initializeQueue(Queue *queue);

//enqueue
void enqueue(Queue *queue,void *node);

//dequeue
void *dequeue(Queue *queue);

int main(int argc, char const *argv[])
{
	Queue queue;
	initializeQueue(&queue);

	Employee *samuel = (Employee*)malloc(sizeof(Employee));
	strcpy(samuel->name,"samuel");
	samuel->age = 44;

	Employee *john = (Employee*)malloc(sizeof(Employee));
	strcpy(john->name,"john");
	john->age = 34;

	Employee *moris = (Employee*)malloc(sizeof(Employee));
	strcpy(moris->name,"moris");
	moris->age = 28;

	enqueue(&queue,samuel);
	enqueue(&queue,john);
	enqueue(&queue,moris);

	void *data = dequeue(&queue);
	printf("Dequeued %s\n",((Employee*) data)->name );

	data = dequeue(&queue);
	printf("Dequeued %s\n", ((Employee*) data)->name);

	data = dequeue(&queue);
	printf("Dequeued %s\n", ((Employee*) data)->name);

	return 0;
}

void initializeQueue(Queue *queue)
{
	initialiazelist(queue);
}

void enqueue(Queue *queue,void *node)
{
	addHead(queue,node);
}

void *dequeue(Queue *queue)
{
	Node *tmp = queue->head;
	void *data;

	if(queue->head == NULL){
		data = NULL;
	} else if (queue->head == queue->tail){
		queue->head = queue->tail = NULL;
		data = tmp->data;
		free(tmp);
	} else {
		while(tmp->next != queue->tail){
			tmp = tmp->next;
		}
		queue->tail = tmp;
		tmp = tmp->next;
		queue->tail->next = NULL;
		data = tmp->data;
		free(tmp);
	}
	return data;
}


int compareEmployee(Employee *e1,Employee *e2)
{
	return strcmp(e1->name,e2->name);
}

void displayEmployee(Employee *employee)
{
	printf("%s\t%d\n",employee->name,employee->age);
}


void initialiazelist(Linkedlist *list)
{
	list->head = NULL;
	list->tail = NULL; 
	list->current = NULL;
}

void addHead(Linkedlist *list,void *data)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	if(list->head == NULL){
		list->tail = node;
		node->next = NULL;
	} else {

		node->next = list->head;
	}
	list->head = node;
}

void addTail(Linkedlist *list, void* data)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;	
	node->next = NULL;
	if(list->head == NULL){
		list->head = node;
	} else {
		list->tail->next = node;
	}
	list->tail = node;
}

Node *getNode(Linkedlist *list,COMPARE compare,void *data)
{
	Node *node = list->head;
	while(node != NULL){
		if (compare(node->data,data) == 0){
			return node;
		}
		node = node->next;
	}
	return NULL;
}

void delete(Linkedlist *list, Node *node)
{
	if (node == list->head){
		if (list->head->next == NULL){
			list->head = list->tail = NULL;	
		} else {
		list->head = list->head->next;
		}
	} else {
		Node *tmp = list->head;
		while(tmp != NULL && tmp->next != node){
			tmp = tmp ->next;
		}
		if (tmp != NULL){
			tmp->next = node->next;
		}
	}
	free(node);
}

void displayLinkedList(Linkedlist *list,DISPLAY display)
{
	printf("\nLinked List\n");
	Node *current = list->head;
	while(current != NULL){
		display(current->data);
		current = current->next;
	}
}