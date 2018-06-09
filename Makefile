CC = g++
CFLAGS = -Wall -g
TARGET = archimedes
ENTRY = main.cpp

SRCS = $(wildcard src/*.cpp)

build:
	$(CC) $(CFLAGS) $(ENTRY) $(SRCS) -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -rf $(TARGET) *.o

print-%  : ; @echo $* = $($*)
	
.PHONY: all clean