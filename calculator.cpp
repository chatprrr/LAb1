#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
//test
//test
//test
//test
//test
