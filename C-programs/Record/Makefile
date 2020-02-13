OBJS 	= record.o main.o
SOURCE	= record.c main.c
HEADER  = record.h 
OUT  	= record
CC		= gcc
FLAGS   = -c

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT)
	
main.o: main.c
	$(CC) $(FLAGS) main.c

record.o: record.c
	$(CC) $(FLAGS) record.c
	
clean:
	rm -f $(OBJS) $(OUT)
	
	
