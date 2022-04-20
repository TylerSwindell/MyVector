all:
	if [ ! -d "./out/" ]; then mkdir out; fi;
	g++ -std=c++14 -g -Wall unitTest.cpp -o ./out/test
	chmod 755 ./out/test
	./out/test

# Cleans up all compiled files
clean: 
	rm -r out/*

again: clean
	make
