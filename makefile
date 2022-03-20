all:
	g++ -std=c++14 -g -Wall main.cpp -o ./out/run
	./out/run

unittest:
	g++ -std=c++14 -g -Wall unitTest.cpp -o ./out/test
	./out/test