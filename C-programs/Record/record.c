#include "record.h"

struct record *create_record(char* id ,char* nm ,char* ct, int tp, int ye)
{
	struct record *r = malloc(sizeof(struct record));

	r->id = malloc(strlen(id)+1);
	strcpy(r->id,id);

	r->name = malloc(strlen(nm)+1);
	strcpy(r->name,nm);

	r->city = malloc(strlen(ct)+1);
	strcpy(r->city,ct);

	r->type = tp;
	r->year = ye;

	return r;
}


void print_record(struct record *r)
{	
	printf("--record info--\n");
	printf("%s\n", r->id );
	printf("%s\n", r->name );
	printf("%s\n", r->city);
	printf("%d\n", r->type);
	printf("%d\n", r->year);

}


void dump_record(struct record *r,FILE *fp)
{
	fprintf(fp,"Record Info:\t");
	fprintf(fp,"%s,", r->id );
	fprintf(fp,"%s,", r->name );
	fprintf(fp,"%s,", r->city);
	fprintf(fp,"%d,", r->type);
	fprintf(fp,"%d\n", r->year);
}


void delete_record(struct record *r)
{
	free(r->id);
	free(r->name);
	free(r->city);
	free(r);
}