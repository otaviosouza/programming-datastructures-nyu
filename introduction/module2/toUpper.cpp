/*************************************************
* toUpper.cpp - Module 2                         *
* Asks the user a single lower case letter and   *
* then out prints it in upper case.              *
* History:                                       *
*   v1.0.0 2021-03-20, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    char lowerCase, upperCase;
    int offset;

    std::cout << "Please enter a lower case letter: ";
    std::cin >> lowerCase;

    offset = (int)(lowerCase - 'a');  // calculate the distance from 'a' character
    upperCase = (char)('A' + offset); // add the offset to 'A' ascii value and cast it

    std::cout << "The upper case of " << lowerCase << " is " << upperCase << "." << std::endl;

    return 0;
} // closes main(void)