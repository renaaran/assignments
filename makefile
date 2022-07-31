CC = g++
 
# compiler flags:
#  -Wall  - this flag is used to turn on most compiler warnings
#  -std=c++11 - compile using c++ 11 standard labguage definitions
CFLAGS  = -Wall -std=c++11 -I./

all: assignment_1 assignment_2 assignment_3 assignfuns.o
 
assignment_1: assignfuns.o sec8/assignment_1.cpp 
	$(CC) $(CFLAGS) sec8/assignment_1.cpp -o sec8/assignment_1 assignfuns.o

assignment_2: assignfuns.o sec8/assignment_2.cpp 
	$(CC) $(CFLAGS) sec8/assignment_2.cpp -o sec8/assignment_2 assignfuns.o

assignment_3: assignfuns.o sec8/assignment_3.cpp 
	$(CC) $(CFLAGS) sec8/assignment_3.cpp -o sec8/assignment_3 assignfuns.o

assignfuns.o: assignfuns.h assignfuns.cpp
	$(CC) $(CFLAGS) -c assignfuns.cpp

clean:
	$(RM) sec8/assignment_1 sec8/assignment_2 sec8/assignment_2 assignfuns.o
