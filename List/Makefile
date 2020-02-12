OBJS 	= employee.o list.o main.o
SOURCE	= employee.c list.c main.c
HEADER  = employee.h list.h 
OUT  	= list
CC	= gcc
FLAGS   = -c

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT)
	
main.o: main.c
	$(CC) $(FLAGS) main.c

list.o: list.c
	$(CC) $(FLAGS) list.c

employee.o: employee.c
	$(CC) $(FLAGS) employee.c
	
clean:
	rm -f $(OBJS) $(OUT)
