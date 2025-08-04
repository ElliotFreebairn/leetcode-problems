
SRCS := $(wildcard src/*.cpp)
SRCS_BASE = $(basename $(SRCS))
BIN = $(patsubst %.cpp,%,$(SRCS))

all: $(BIN)

clean:
	rm -f $(SRCS_BASE)
