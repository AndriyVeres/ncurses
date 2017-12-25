main:main.o readkey.o
	g++ main.o readkey.o -lncurses -o main
	./main
main.o:main.cpp
	g++ -c main.cpp
readkey.o:readkey.cpp
	g++ -c readkey.cpp
clean:
	rm -rf *.o main
