CC = g++
CFLAGS = -Wall -g -std=c++11
TARGET = archimedes
ENTRY = main.cpp

SRCS = $(wildcard src/*.cpp)

build:
	@echo "Building source files"
	$(CC) $(CFLAGS) $(ENTRY) $(SRCS) -o $(TARGET)

run: build
	@echo "Running target ($(TARGET))"
	./$(TARGET)

clean:
	rm -rf $(TARGET) *.o

print-%  : ; @echo $* = $($*)
	
.PHONY: all clean