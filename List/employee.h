#ifndef __EMPLOYEE__ 
#define __EMPLOYEE__ 

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

//compares two employees
int compareEmployee(Employee *e1,Employee *e2);

//displays a single employee
void displayEmployee(Employee* Employee);

typedef void(*DISPLAY)(void*);

typedef int(*COMPARE)(void*, void*);

#endif