/*******************************************
* ascii.cpp - Week 2                       *
* Reads from the user a single character   *
* and than prints it's ASCII value         *
* History:                                 *
*   v1.0.0 2021-03-20, Otávio Souza        *
*     - first release                      *
********************************************/
#include <iostream>

int main(void)
{
    char inputChar;
    int asciiValue;

    std::cout << "Please enter a single character: ";
    std::cin >> inputChar;

    asciiValue = (int)inputChar;

    std::cout << "The ASCII value of " << inputChar << " is " << asciiValue << "." << std::endl;

    return 0;
} // closes main(void)
