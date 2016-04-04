exp: Clock.h Clock.o B.o
	g++ -o exp Clock.o B.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

B.o: B.cpp Clock.h
	g++ -c B.cpp

lab3: lab3.cpp
	g++ -o lab3 lab3.cpp

clean: 
	rm B*.o
	rm Clock*.o
