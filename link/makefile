CC = g++
CFLAGS = -g -Wall -O

SOURCES = $(wildcard *.cpp)

OBJECT = $(patsubst %cpp, %o, $(SOURCES))

TARGET = main

$(TARGET): $(OBJECT)
	$(CC) $(OBJECT) -o main

#%.o: %.cpp
$(OBJECT): $(SOURCES)
	$(CC) $(CFLAGS) -c $^

.PHONY : clean

clean :
	rm $(TARGET) $(OBJECT)
