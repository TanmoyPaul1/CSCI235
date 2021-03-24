OBJECTS=Node.o stack.o
CXXFLAGS=
LDFLAGS=
CXX=g++

main: main.o $(OBJECTS) 
	$(CXX) -o main main.o $(OBJECTS)

main.o: main.cpp stack.h

stack.o: stack.cpp stack.h 

Node.o: Node.cpp Node.h

clean:
	rm -f $(OBJECTS) main main.o
