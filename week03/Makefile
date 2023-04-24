all: fly
	./fly

fly: HotAirBalloon.o main.o
	g++ -std=c++17 -o fly HotAirBalloon.o main.o

HotAirBalloon.o: HotAirBalloon.cpp HotAirBalloon.h
	g++ -std=c++17 -c HotAirBalloon.cpp

main.o: main.cpp HotAirBalloon.h
	g++ -std=c++17 -c main.cpp

clean:
	rm -f fly *.o *~


.PHONY: all clean
