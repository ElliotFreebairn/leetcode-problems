
SRCS := $(wildcard *.cpp)
BIN = $(patsubst %.cpp,%,$(SRCS))

all: $(BIN)

clean:
	rm -f %(BIN)
