#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << this->real << " + " << this->imaginary << "i" << endl;
    }

    void plus(Complex c2)
    {
        real = real + (c2.real);
        imaginary = imaginary + (c2.imaginary);
    }

    void multiply(Complex c2)
    {
        real = real * (c2.real);
        imaginary = imaginary * (c2.imaginary);
    }
};