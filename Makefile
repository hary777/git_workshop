CC=gcc
CFLAGS=-std=gnu99 -Wall -Wextra -Werror -pedantic -c
LDFLAGS=
SOURCES=prog.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=prog

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o: 
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm prog.o
