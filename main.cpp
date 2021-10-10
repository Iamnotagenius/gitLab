/**
 * @file main.cpp
 * @author Gleb Begletsov (gleb.begletsov@niuitmo.ru)
 * @brief Simple console calculator
 * @version 0.1
 * @date 2021-09-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief calculating numbers
 * 
 * @param a 
 * @param b 
 * @param flag 
 * @return double 
 */
double calculate(double a, double b, char flag) {
    switch (flag) {
    case '+':
        return a+b;
    case '-':
        return a-b;
     case '*':
        return a*b;
    case '/':
        return a/b;
    default:
        return 0;
        break;
    }
}

int main() {
    double a, b;
    char flag;
    cout << "First number: "; cin >> a;
    cout << "Second number: "; cin >> b;
    cout << "Arithmetic operation: "; cin >> flag;
    cout << calculate(a,b,flag) << '\n';
    return 0;
}
