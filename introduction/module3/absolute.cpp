/*************************************************
* absolute.cpp - Module 3                        *
* Reads from the user an integer, and prints     *
* it's absolute value.                           *
* History:                                       *
*   v1.0.0 2021-03-25, Otávio Souza              *
*     - first release                            *
*************************************************/
#include <iostream>

int main(void)
{
    int nUserInt;

    std::cout << "Please enter an integer: ";
    std::cin >> nUserInt;

    if (nUserInt < 0)
    {
        std::cout << '|' << nUserInt << "| = " << (-1) * nUserInt << std::endl;
        return 0;
    }

    std::cout << '|' << nUserInt << "| = " << nUserInt << std::endl;

    return 0;
} // closes main(void)
