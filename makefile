all:
<<<<<<< HEAD
	if [ ! -d "./out/" ]; then mkdir out; fi;
	g++ -std=c++14 -g -Wall unitTest.cpp -o ./out/test
	chmod 755 ./out/test
	./out/test

# Cleans up all compiled files
clean: 
	rm -r out/*

again: clean
	make
=======
	g++ -std=c++14 -g -Wall main.cpp -o ./out/run
	./out/run

unittest:
	g++ -std=c++14 -g -Wall unitTest.cpp -o ./out/test
	./out/test
>>>>>>> 53fbd01 (initial commmit)
