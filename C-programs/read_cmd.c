#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{

	FILE *fp; 
	char *line = NULL;
	size_t len;

	for(int i = 1; i < argc; i+=2)
	{
		if(strcmp(argv[i],"-r") == 0)
		{
			fp = fopen(argv[i+1],"r");
			if (fp == NULL){ printf("--can't open file--\n"); exit(1);}
			getline(&line,&len,fp);
			printf("%s",line);
		}
		else if(strcmp(argv[i],"-s")== 0)
		{	
			int num = atoi(argv[i+1]);
			printf("%d\n",num);
		}
		else printf("unknown argument flag given\n flags to use: -w -s");

	}

	fclose(fp);

	return 0;
}







