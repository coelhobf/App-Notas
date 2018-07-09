all: Nota.o Materia.o main.o
	g++ Nota.o Materia.o main.o -g -o teste

Nota.o: Nota.h Nota.cpp
	g++ -c -g Nota.cpp

Materia.o: Materia.h Materia.cpp
	g++ -c -g Materia.cpp

main.o: main.cpp
	g++ -c -g main.cpp