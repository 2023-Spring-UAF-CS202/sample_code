CXX=g++
CXXFLAGS=-g -std=c++17 -Wall -Wextra -pedantic

all: main


Rectangle.o: Rectangle.cpp Rectangle.h
	${CXX} ${CXXFLAGS} -c Rectangle.cpp

Square.o: Square.cpp Square.h Rectangle.h
	${CXX} ${CXXFLAGS} -c Square.cpp

main.o: main.cpp
	${CXX} ${CXXFLAGS} -c main.o

main: Rectangle.o
	g++ -o main main.o Rectangle.o Square.o

clean:
	rm -f main *.o *~
