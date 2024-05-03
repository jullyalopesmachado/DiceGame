DiceGame: main2.o player.o oponent.o game.o
	g++ -std=c++11 main2.o player.o oponent.o game.o -o DiceGame

main2.o: main2.cpp
	g++ -std=c++11 -c main2.cpp

player.o: player.cpp player.h
	g++ -std=c++11 -c player.cpp

oponent.o: oponent.cpp oponent.h
	g++ -std=c++11 -c oponent.cpp

game.o: game.cpp game.h
	g++ -std=c++11 -c game.cpp

clean:
	rm *.o DiceGame

