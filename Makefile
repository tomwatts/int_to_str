all: default

default: int_to_str.o
	g++ -o int_to_str int_to_str.o

int_to_str.o: int_to_str.cpp
	g++ -c int_to_str.cpp

clean:
	rm -f *.o int_to_str

