///////// Student Info/////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//
//

#include <iostream>
#include <cmath>
using namespace std;

bool isZero(float num, float epsilon = 1e-6) {
    return fabs(num) < epsilon;  // Check if num is very close to 0
}

float calculate(float num1, float num2, char op) 
{
    if (op == '+') 
    {
        return num1 + num2;
    } 
    else if (op == '-')
    {
        return num1 - num2;
    } 
    else if (op == '*') 
    {
        return num1 * num2;
    } 
    else if (op == '/') 
    {
        if (isZero(num2)) 
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
}

int main() {
    cout << "Addition (10 + 5): " << calculate(10, 5, '+') << endl;
    cout << "Subtraction (10.5 - 3.2): " << calculate(10.5, 3.2, '-') << endl;
    cout << "Multiplication (4 * 2): " << calculate(4, 2, '*') << endl;
    cout << "Division (10 / 2): " << calculate(10, 2, '/') << endl;
    cout << "Division (10.6 / 0.0): " << calculate(10.6, 0.0, '/') << endl;
    cout << "Division by zero (10 / 0): " << calculate(10, 0, '/') << endl;
    return 0;
}
