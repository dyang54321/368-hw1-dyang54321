WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)
VAL = valgrind --tool=memcheck --log-file=memcheck.txt --leak-check=full --verbose

TESTFLAGS = -DTEST_COINS
SRCS = main.c a1.c
OBJS = $(SRCS:%.c=%.o)

a1: $(OBJS)
	$(GCC) $(TESTFLAGS) $(OBJS) -o a1

.c.o:
	$(GCC) $(TESTFLAGS) -c $*.c

testmemory: a1
	$(VAL) ./a1 10

testall: test1 test2 test3 test4 test5

test1: a1
	./a1 10

test2: a1
	./a1 90

test3: a1
	./a1 17

test4: a1
	./a1 33

test5: a1
	./a1 2

clean:
	rm -f a1 *.o *.txt output? *~