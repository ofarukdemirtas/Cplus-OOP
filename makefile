hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/car.o -c ./src/car.cpp
	g++ -I ./include/ -o ./lib/Animal.o -c ./src/Animal.cpp
	g++ -I ./include/ -o ./lib/Cat.o -c ./src/Cat.cpp
	g++ -I ./include/ -o ./lib/Dog.o -c ./src/Dog.cpp
	g++ -I ./include/ -o ./lib/Bird.o -c ./src/Bird.cpp

	g++ -I ./include/ -o ./bin/main ./lib/Bird.o ./lib/Dog.o ./lib/Cat.o ./lib/Animal.o ./lib/car.o ./src/main.cpp
calistir:
	./bin/main