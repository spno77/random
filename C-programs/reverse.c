/*Reverses a series of numbers*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define N 5

int main(void)
{
	int a[10] , *p;

	printf("Enter %d numbers:",N);
	for (p = a;p < a+N; p++)
		scanf("%d",p);

	printf("In reverse order: \n");
	for(p = a+N-1; p >= a; p--)
		printf("%d\n",*p);

	return 0;
}

