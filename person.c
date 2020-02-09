#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


typedef struct person
{
	char* firstname;
	char* lastname;
	char* title;
	uint age;	
} Person;

/*init person */
void Person_init(Person *person,const char* fn,const char* ln,const char* title,uint age );

/*dealloc person */
void Person_dealloc(Person *person);

/*print person */
void Person_print(Person *person);

int main(int argc, char const *argv[])
{
	
	Person person[3];

	Person_init(&person[0],"Tom","Hardy","doctor",28);
	Person_print(&person[0]);
	Person_dealloc(&person[0]);

	Person_init(&person[1],"John","Sienna","wrestler",31);
	Person_print(&person[1]);
	Person_dealloc(&person[1]);

	return 0;
}

void Person_init(Person *person,const char* fn,const char* ln,const char* title,uint age )
{	
	person->firstname = malloc(strlen(fn)+1);
	strcpy(person->firstname,fn);
	
	person->lastname = malloc(strlen(ln)+1);
	strcpy(person->lastname,ln);
	
	person->title = malloc(strlen(title)+1);
	strcpy(person->title,title);

	person->age = age;
}

void Person_dealloc(Person *person)
{
	free(person->firstname);
	free(person->lastname);
	free(person->title);

}

void Person_print(Person *person)
{
	printf("---Person info---\n");
	printf("Firstname: %s\n",person->firstname );
	printf("Lastname: %s\n",person->lastname );
	printf("Title: %s\n",person->title );
	printf("Age: %d\n",person->age );
}












