/// Author: Cort Smith
/// Class: Calculator
/// Description: Contains all functionality of the calculator system.

#include <stack>

class Calculator {
    std::stack<char *> stack;
    
public:
    Calculator();
    ~Calculator();
    double calculate(double, char, double);
    double execute(int, char *[]);
};