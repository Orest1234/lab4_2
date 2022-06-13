#pragma once

#include "Root.h"

class Square
        : public Root
{
private:
    double a, b, c;
public:
    Square(void);
    Square(double a, double b, double c);
    ~Square(void);

    virtual void getRoot();
};
