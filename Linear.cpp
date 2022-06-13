#include "Linear.h"
#include <iostream>

using namespace std;

Linear::Linear(void)
{}

Linear::Linear(double a, double b)
{
    this->a = a;
    this->b = b;
}

Linear::~Linear(void)
{}

void Linear::getRoot()
{
    double x;

    if (a == 0 && b == 0)
    {
        cout << "Root of " << a << "*x + " << b << " = 0" << endl;
        cout << "x = inf" << endl;
    }
    else if (a == 0 && b != 0)
    {
        cout << "Root of " << a << "*x + " << b << " = 0" << endl;
        cout << "x = nan" << endl;
    }
    else
    {
        x = -(b / a);
        cout << "Root of " << a << "*x + " << b << " = 0" << endl;
        cout << "x = " << x << endl;
    }
    cout << endl;
}
