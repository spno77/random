#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8
//finds largest and smallest elements in an array
void max_min(int a[],int n,int *max, int *min);

int main(void)
{
	int b[N] = {1,2,3,4,4,7,44,2};

	int i, big ,small ;

	max_min(b,N,&big,&small);

	printf("largest is : %d\n", big);
 	printf("smallest is :%d\n", small);

	return 0;
}


void max_min(int a[],int n,int *max,int *min)
{
	int i;

	*max = *min = a[0];

	for (i = 1; i < n ; i++){
		if (a[i] > *max)
			*max = a[i];
		else if (a[i] < *min)
			*min = a[i];
	}
}

