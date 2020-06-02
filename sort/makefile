CC = g++
CFLAGS = -g -Wall -O

OBJECT = main.o insert_sort.o

main: $(OBJECT)
	$(CC) $(OBJECT) -o main

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY : clean

clean :
	rm main main.o insert_sort.o
