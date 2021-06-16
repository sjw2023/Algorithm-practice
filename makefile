.PHONY = all clean

CC = gcc

FLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all: $(BINS)

%:%.o
	@echo "Checking..."
	${CC} ${FLAG} $< -o $@

%.o:%.c
	@echo "Creating Objects..."
	${CC} -c &<
  
clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}