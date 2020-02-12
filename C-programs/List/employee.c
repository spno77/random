#include "employee.h"


int compareEmployee(Employee *e1,Employee *e2)
{
	return strcmp(e1->name,e2->name);
}

void displayEmployee(Employee *employee)
{
	printf("%s\t%d\n",employee->name,employee->age);
}
