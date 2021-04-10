/// Author: Cort Smith
/// Project: CLI Calculator
/// Description: Simple calculator returns the value of the given equation.

#include <iostream>
using namespace std;

///#include "../include/Calculator.h"



int main(int argc, char *argv[]) {
    
    if (argc > 1) {
        /// Parse arguments
        cout << "Calculating problem." << endl;
    }
    else {
        cout << "Error! No calculation given." << endl;
        cout << "Example use:" << endl;
        cout << "calc 1+2/3*(9^2)" << endl;
    }
    
    return 0;
}