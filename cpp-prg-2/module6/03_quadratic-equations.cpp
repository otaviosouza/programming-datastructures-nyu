/*************************************************************
* 03_quadratic-equations.cpp - Module 6                      *
* Write a program that reads 3 real numbers, representing    *
* coefficients of a quadratic equation, and prints the       *
* solutions of the equation, if there any, or an appropriate *
* message.                                                   *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-04-11, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>
#include <cmath>

// Constants to represent type of solutions to an equation

const int NO_REALS = 0;  // no real solution
const int ONE_SOL = 1;   // one real solution
const int TWO_SOL = 2;   // two real solutions
const int NO_SOL = 3;    // no solution
const int ALL_REALS = 4; // all reals

int Quadratic(double a, double b, double c, double &out_x1, double &out_x2);
int Linear(double a, double b, double &out_x);

// This programs solves a quadratic equation
// Input from user: 3 real numbers, representing coefficients of a quadratic equation
// Output to user: The solutions of the equation, if there are any, or an appropriate message
int main(void)
{
    double a, b, c, x1, x2;
    std::cout << "Please enter the coefficients of quadratic equation (separated by space): ";
    std::cin >> a >> b >> c;

    std::cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;

    switch (Quadratic(a, b, c, x1, x2))
    {
    case TWO_SOL:
        std::cout << "Solutions: " << x1 << " , " << x2 << std::endl;
        break;
    case ONE_SOL:
        std::cout << "One solution: " << x1 << std::endl;
        break;
    case NO_REALS:
        std::cout << "No real solution." << std::endl;
        break;
    case NO_SOL:
        std::cout << "No solutions." << std::endl;
        break;
    case ALL_REALS:
        std::cout << "All real numbers are solutions." << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
        break;
    }

    return 0;
} // closes main()

// Quadratic: Solves the quadratic equation: ax^2 + bx + c = 0
// Input: a, b, c - coefficients of equation
// Output:
// 1. Type of solution (return value)
// 2. out_x1, out_x2 - solutions to equation (output parameters)
// Assumptions:
// 1. If equation has one solution it will be returned in out_x1
// 2. If equation has no real solutions the values in out_x1 and out_x2 are not defined

int Quadratic(double a, double b, double c, double &out_x1, double &out_x2)
{
    double delta;
    if (a != 0.0)
    {
        delta = pow(b, 2) - (4 * a * c);
        if (delta > 0)
        {
            out_x1 = (-b + sqrt(delta)) / (2 * a);
            out_x2 = (-b - sqrt(delta)) / (2 * a);
            return TWO_SOL;
        }
        else if (delta == 0.0)
        {
            out_x1 = (-b) / (2 * a);
            return ONE_SOL;
        }
        else
        {
            return NO_REALS;
        }
    }
    else
    {
        return Linear(b, c, out_x1);
    }

} // closes Quadratic()

// Linear: Solves the linear equation: ax + b = 0
// Input: a, b - coefficients of equation
// Output:
// 1. Type of solution (return value)
// 2. out_x - solution to equation (output parameter)
// Assumptions:
// If equation has no real solutions the value in out_x is not defined
int Linear(double a, double b, double &out_x)
{
    if (a != 0)
    {
        out_x = -b / a;
        return ONE_SOL;
    }
    else if ((a == 0.0) && (b == 0.0))
    {
        out_x = 0;
        return ALL_REALS;
    }
    else
    {
        // (a == 0) && (b != 0)
        return NO_SOL;
    }
}