CC=g++
CFLAGS=-c -Wall 

all: setoflines

setoflines:  
	$(CC) $(CFLAGS) src/setoflines/Bucket.cpp src/setoflines/Line.cpp src/setoflines/Pair.cpp src/setoflines/Point.cpp src/setoflines/PotentialLine.cpp 

clean:
	rm -rf *.o setoflines
