#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square(void)
{}

Square::Square(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

Square::~Square(void)
{}

void Square::getRoot()
{
    double x1, x2, d;
    if (a == 0.0)
    {
        cout << "Roots of " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
        cout << "x1, x2 = nan" << endl << endl;
        return;
    }

    d = b * b - 4 * a * c;
    cout << "D = " << d << endl;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "Roots of " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0.0)
    {
        x1 = (-b / (2 * a));
        x2 = x1;
        cout << "Roots of " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        cout << "Roots of " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
        cout << "x1, x2 = nan" << endl;
    }
    cout << endl;
}
