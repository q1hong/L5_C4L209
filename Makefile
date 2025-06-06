CC = gcc
CFLAGS = -Wall -I./src
LDFLAGS = -lcjson
TARGET = build/ejercicio1

all: $(TARGET)

$(TARGET): src/main.c src/json.c src/json.h
	mkdir -p build
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -rf build

.PHONY: all clean