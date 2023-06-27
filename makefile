hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/car.o -c ./src/car.cpp
	g++ -I ./include/ -o ./bin/main ./lib/car.o ./src/main.cpp
	
calistir:
	./bin/main
