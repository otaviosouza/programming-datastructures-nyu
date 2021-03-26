/*************************************************
* countoddeven.cpp - Module 3 Labs               *
* Inputs four numbers separated by spaces and    *
* count how many odd and even numbers there are. *
* Outputs one of three possibilities depending   *
* on how many even and odd numbers are entered.  *
* History:                                       *
*   v1.0.0 2021-03-26, Otávio Souza              *
*     - first release                            *
*************************************************/
#include <iostream>

int main(void)
{
    int nNbr1, nNbr2, nNbr3, nNbr4;
    int nEven = 0, nOdd = 0;

    std::cout << "Please enter 4 positive integers, separated by a space: ";
    std::cin >> nNbr1 >> nNbr2 >> nNbr3 >> nNbr4;

    (nNbr1 % 2 == 0) ? nEven += 1 : nOdd += 1;
    (nNbr2 % 2 == 0) ? nEven += 1 : nOdd += 1;
    (nNbr3 % 2 == 0) ? nEven += 1 : nOdd += 1;
    (nNbr4 % 2 == 0) ? nEven += 1 : nOdd += 1;

    if (nEven > nOdd)
    {
        std::cout << "more evens" << std::endl;
    }
    else if (nEven < nOdd)
    {
        std::cout << "more odds" << std::endl;
    }
    else
    {
        std::cout << "same number of evens and odds" << std::endl;
    }

    return 0;
} // closes main(void)
