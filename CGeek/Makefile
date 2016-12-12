CC=g++
CFLAGS= -g -Wall -std=c++14
LDFLAGS=-lm

SRC_DIR=src
HEADERS_DIR=include
LIB_DIR=/usr/local/lib
INCLUDE_DIR=/usr/local/include
SOURCES=$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/palinsubseq.cpp \
		$(SRC_DIR)/recursion.cpp \
		
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=output





all: $(SOURCES) $(EXECUTABLE)
	$(CC) $(CFLAGS) $(OBJECTS) -o output


$(EXECUTABLE): $(OBJECTS)
	$(CC)  $(CFLAGS)  $(OBJECTS) -I$(HEADERS_DIR) -I$(INCLUDE_DIR) -L$(LIB_DIR) $(LDFLAGS)  -o $@

.cpp.o:
	$(CC) $(CFLAGS) -I$(HEADERS_DIR) -I$(INCLUDE_DIR) -L$(LIB_DIR)  -c $< -o $@ 

clean:
	rm src/*.o