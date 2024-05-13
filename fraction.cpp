#include <iostream>
using namespace std;

// This can be modified for complex numbers too

class Fraction
{
private:
    int a;
    int b;

public:

    Fraction(int a, int b) : a{ a }, b{ b } {}

    void initNumber()
    {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    }

    void addition()
    {
        int sum;
        sum = a + b;
        cout << "Addition of number: " << sum << endl;
    }

    void subtraction()
    {
        int sub;
        sub = a - b;
        cout << "Subtraction of number: " << sub << endl;
    }

    void multiplication()
    {
        int mul;
        mul = a * b;
        cout << "Multiplication of number: " << mul << endl;
    }

    void division()
    {
        int div;
        div = a / b;
        cout << "Multiplication of number: " << div << endl;
    }

    Fraction operator+(const Fraction& other)
    {
        Fraction num1((this->a + other.a), (this->b + other.b));
        return num1;
    }
    Fraction operator -(const Fraction& other)
    {
        Fraction num1((this->a - other.a), (this->b - other.b));
        return num1;
    }
    Fraction operator *(const Fraction& other)
    {
        Fraction num1((this->a * other.a), (this->b * other.b));
        return num1;
    }
    Fraction operator /(const Fraction& other)
    {
        Fraction num1((this->a / other.a), (this->b / other.b));
        return num1;
    }
};