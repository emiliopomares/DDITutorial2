build/Chapter2:build/Chapter2.o
	g++ -o build/Chapter2 build/Chapter2.o

build/Chapter2.o:src/Chapter2.cpp
	mkdir build
	g++ -c src/Chapter2.cpp -o build/Chapter2.o

clean:
	rm build/Chapter2
	rm build/Chapter2.o

run:
	build/Chapter2
