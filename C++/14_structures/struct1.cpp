//substract two complex numbers;

#include <iostream>

using namespace std;

// Structure to store complex number
struct complex_number
{
    // Store real part of complex number
    double real;
    // Store imaginary part of complex number
    double imaginary;
};

// Function subtract
complex_number subtract(struct complex_number c1, struct complex_number c2)
{
    // Declare a structure variable
    struct complex_number c;
    // Subtract real parts
    c.real = c1.real - c2.real;
    // Subtract imaginary parts
    c.imaginary = c1.imaginary - c2.imaginary;
    // Return structure variable
    return c;
}

// Function print_complex
void print_complex(struct complex_number c)
{
    cout << c.real << " + ";
    cout << c.imaginary << " i ";
    cout << endl;
}

// Function main
int main()
{
    // Declare structure variables
    struct complex_number c1, c2, c;
    // Initialize structure variable c1
    c1 = {-12.3, -67.4};
    // Initialize structure variable c2
    c2 = {34, 89};
    // Print members of c1
    cout << "First complex number = ";
    print_complex(c1);
    // Print members of c2
    cout << "Second complex number = ";
    print_complex(c2);
    // Call subtract function and store its output in c
    c = subtract(c1, c2);
    // Print members of c
    cout << "First complex number - Second complex number = ";
    print_complex(c);
}