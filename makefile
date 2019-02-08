# build an executable named myprog from myprog.c
all: main.cpp
	g++ -g -Wall -o dec2bin main.cpp

clean:
	$(RM) dec2bin
