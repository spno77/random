#include <stdio.h>

#include "record.h"

int main(int argc, char const *argv[])
{
	FILE *fp;

	fp = fopen("results.txt","w"); 

	struct record *rec1,*rec2;

	rec1 = create_record("111","shop","liverpool",1,1999);
	print_record(rec1);
	dump_record(rec1,fp);
	delete_record(rec1);

	rec2 = create_record("112","shop","london",1,2007);
	print_record(rec2);
	dump_record(rec2,fp);
	delete_record(rec2);

	fclose(fp);

	return 0;
}
