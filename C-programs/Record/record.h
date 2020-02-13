#ifndef __RECORD__
#define __RECORD__

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record
{
	char *id;
	char *name;
	char *city;
	int  type;
	int  year;	
};

//create record
struct record *create_record(char* id ,char* nm ,char* ct, int tp, int ye);

//print record 
void print_record(struct record *r);

//dump record 
void dump_record(struct record *r,FILE *fp);

//delete record
void delete_record(struct record *r); 


#endif