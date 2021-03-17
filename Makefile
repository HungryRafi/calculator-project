CFLAGS = -O

CC = g++

NumTest:main.o addition.o multiplication.o subtraction.o division.o
	$(CC) $(CFLAGS) -o Rafiul main.o addition.o multiplication.o subtraction.o division.o
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

addition.o: addition.cpp
	$(CC) $(CFLAGS) -c addition.cpp

multiplication.o: multiplication.cpp
	$(CC) $(CFLAGS) -c multiplication.cpp

subtraction.o: subtraction.cpp
	$(CC) $(CFLAGS) -c subtraction.cpp

division.o: division.cpp
	$(CC) $(CFLAGS) -c division.cpp

clean:
	rm -f core *.o
