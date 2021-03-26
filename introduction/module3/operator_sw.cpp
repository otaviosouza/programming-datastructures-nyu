/*************************************************
* operator_sw.cpp - Module 3                     *
* Reads from the user a simple mathematical      *
* expression (+, -, /, *) and out prints         *
* it's value.                                    *
* History:                                       *
*   v1.0.0 2021-03-25, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    double fArg1, fArg2, fRes;
    char cOp;

    std::cout << "Please enter an expression of the form arg1 op arg2: ";
    std::cin >> fArg1 >> cOp >> fArg2;

    // numeric-expression must be of type
    // int (short int, int or long int), char or bool

    switch (cOp)
    {
    case '+':
        fRes = fArg1 + fArg2;
        break;
    case '-':
        fRes = fArg1 - fArg2;
        break;
    case '*':
        fRes = fArg1 * fArg2;
        break;
    case '/':
        if (fArg2 != 0)
        {
            fRes = fArg1 / fArg2;
            break;
        }
        // else
        // {
        //     std::cout << "Illegal expression." << std::endl;
        //     return 0;
        // }

    default:
        std::cout << "Illegal expression." << std::endl;
        return 0;
    }

    std::cout << fArg1 << cOp << fArg2 << " = " << fRes << std::endl;

    return 0;
} // closes main(void)
