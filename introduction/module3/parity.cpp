/*************************************************
* parity.cpp - Module 3                          *
* Reads from the user a positive integer, and    *
* determines it's parity (even or odd).          *
* History:                                       *
*   v1.0.0 2021-03-25, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    int nUserInt;

    std::cout << "Please enter a positive integer: ";
    std::cin >> nUserInt;

    if (nUserInt < 0)
    {
        std::cout << nUserInt << " is not a positive integer." << std::endl;
    }
    else if ((nUserInt % 2) == 0)
    {
        std::cout << nUserInt << " is even." << std::endl;
    }
    else
    {
        std::cout << nUserInt << " is odd." << std::endl;
    }

    return 0;
} // closes main(void)
