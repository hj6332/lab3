CC = g++
CFLAGS = -g -O2
TARGET = out

OBJS = main.o math_func.o

$(TARGET)	:	$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

main.o : main.cc
	$(CC) $(CFLAGS) -c $<
math_fun.o: math_func.cc
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o func
