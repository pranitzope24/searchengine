CC = g++

default: searchengine clean

searchengine : searchengine.o
	$(CC) -o searchengine searchengine.o

searchengine.o :
	$(CC) -c searchengine.cpp

clean :
	rm *.o
