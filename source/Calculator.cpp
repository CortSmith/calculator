/// Author: Cort Smith
/// Class: Calculator
/// Description: Source Code

#include "../include/Calculator.h"
#include <stdlib.h>

Calculator::Calculator() {
    
}

Calculator::~Calculator() {
    
}

double Calculator::calculate(double a, char c, double b) {
    double result = 0.0;
    switch(c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '/':
            result = a / b;
            break;
        case '*':
            result = a * b;
            break;
        case '^':
            result = a;
            for (int i=1; i < b; i++) {
                result *= a;
            }
            break;
        default:
            result = 0.0;
    }
    return result;
}

double Calculator::execute(int argc, char *argv[]) {
    
    double result = 0.0;
    
    result = this->calculate(std::strtod(argv[0]), argv[1], std::strtod(argv[2]));
    
    return result;
}
