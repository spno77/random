/* prints command line arguments in reverse order */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int i;

	for(i = argc-1; i > 0;i--)
		printf("%s\n",argv[i]); 

	return 0;
}