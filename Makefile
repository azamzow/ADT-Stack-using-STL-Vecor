all: hello
	
hello: Application.o My_stack.o
	g++ Application.o My_stack.o -o hello
	
Application.o: Application.cpp
	g++ -c Application.cpp
	
My_stack.o: My_stack.cpp
	g++ -c My_stack.cpp
	
clean:
	rm -rf *.o hello