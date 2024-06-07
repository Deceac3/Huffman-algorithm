CC = gcc
CFLAGS = -Wall

SRCDIR = src
SOURCES = $(wildcard $(SRCDIR)/*.c)
EXECUTABLE = hafman

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS)	$^ -o $@

clean:
	rm -f $(EXECUTABLE) 