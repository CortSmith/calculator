
all: dependencies
	c++ main.o Calculator.o -o calc

dependencies:
	c++ source/main.cpp source/Calculator.cpp -c
