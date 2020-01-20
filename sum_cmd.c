/*prints the sum of command line integers */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int i,result ,sum = 0;

	for(i = 0 ; i < argc; i ++){
		if ((result = atoi(argv[i])) != 0){
			printf("%d\n",result);
			sum += result;
		}

	}

	printf("The sum is: %d\n",sum);

	return 0;
}