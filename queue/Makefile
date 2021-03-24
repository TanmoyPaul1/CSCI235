OBJECTS=Dnode.o queue.o
CXXFLAGS=
LDFLAGS=
CXX=g++

main: main.o $(OBJECTS) 
	$(CXX) -o main main.o $(OBJECTS)

main.o: main.cpp queue.h

queue.o: queue.cpp queue.h 

Dnode.o: Dnode.cpp Dnode.h

clean:
	rm -f $(OBJECTS) main main.o
