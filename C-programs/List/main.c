#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "list.h"


int main(int argc, char const *argv[])
{
	Linkedlist list;
	
	Employee *samuel = (Employee*)malloc(sizeof(Employee));
	strcpy(samuel->name,"samuel");
	samuel->age = 44;

	Employee *john = (Employee*)malloc(sizeof(Employee));
	strcpy(john->name,"john");
	john->age = 34;

	Employee *moris = (Employee*)malloc(sizeof(Employee));
	strcpy(moris->name,"moris");
	moris->age = 28;

	Employee *nana = (Employee*)malloc(sizeof(Employee));
	strcpy(nana->name,"nana");
	nana->age = 29;

	initialiazelist(&list);

	addHead(&list,samuel);
	addHead(&list,john);
	addHead(&list,moris);
	addHead(&list,nana);


	displayLinkedList(&list,(DISPLAY)displayEmployee);

	return 0;
}