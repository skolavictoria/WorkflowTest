CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic
LDFLAGS = -shared -fPIC

.PHONY: all clean test test_manual

all: libsorting.so test_manual

libsorting.so: sorting.c sorting.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ sorting.c

test_manual: test_manual.c sorting.c sorting.h
	$(CC) $(CFLAGS) -o $@ test_manual.c sorting.c

test: libsorting.so
	pytest -xvs test_sorting.py

run_manual: test_manual
	./test_manual

clean:
	rm -f libsorting.so test_manual
