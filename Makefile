all: BrazoRobotico

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

BrazoRobotico: main.o BrazoRobotico.o
	g++ -o BrazoRobotico main.o BrazoRobotico.o

clean:
	rm -f *.o BrazoRobotico

test: all
	./BrazoRobotico

