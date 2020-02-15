#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


struct person
{
	char *name;
	char *lastname;
	int   age;
	char *origin;
};


//creates a person from a string
struct person *person_create(char *str)
{
	if(str == NULL)
	{
		printf("cannot create person from a NULL string");
		exit(1);
	}

	struct person *p = malloc(sizeof(struct person));

	char *token = NULL;

	token=strtok(str,";");
	p->name = malloc(sizeof(char)*strlen(token)+1);
	strcpy(p->name,token);
	
	token=strtok(NULL,";");
	p->lastname=malloc(sizeof(char)*strlen(token)+1);
	strcpy(p->lastname,token);

	token=strtok(NULL,";");
	p->age = atoi(token);

	token=strtok(NULL,";");
	p->origin=malloc(sizeof(char)*strlen(token)+1);
	strcpy(p->origin,token);

	return p;

}

//prints a person
void person_print(struct person *p)
{
	printf("---printing a person---\n");
	printf("\tName:%s\n",p->name );
	printf("\tLastname:%s\n",p->lastname );
	printf("\tAge:%d\n",p->age );
	printf("\tOrigin:%s\n",p->origin );
}

//free a person
void person_free(struct person *p)
{
	free(p->name);
	free(p->lastname);
	free(p->origin);
	free(p);

}

int main(int argc, char const *argv[])
{
	char *persons[] = {"nina;fuentes;24;madrit","tomas;tomasso;43;liverpool","jack;jones;33;boston"};

	struct person *p;

	for(int i = 0; i < 3; i++)
	{	

		char *str = malloc(strlen(persons[i]) + 1);
		strcpy(str,persons[i]);
	
		p = person_create(str);

		person_print(p);

		person_free(p);

		free(str);

	}

	return 0;
}
