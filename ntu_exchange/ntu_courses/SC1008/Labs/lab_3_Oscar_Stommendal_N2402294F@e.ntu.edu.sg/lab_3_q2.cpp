///////// Student Info /////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//
//
#include <iostream>

class Complex 
{
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the - operator
    Complex operator-(const Complex& other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the << operator for output
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        if (c.imag >= 0) 
        {
            out << c.real << " + " << c.imag << "i";
        } else 
        {
            out << c.real << " - " << -c.imag << "i";
        }
        return out;
    }
};

int main() {
    Complex c1(3.5, 2.0);
    Complex c2(1.5, 4.0);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    std::cout << "First Complex Number: " << c1 << std::endl;
    std::cout << "Second Complex Number: " << c2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    return 0;
}
