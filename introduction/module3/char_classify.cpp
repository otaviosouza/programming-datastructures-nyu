/*************************************************
* char_classify.cpp - Module 3                   *
* Reads from the user a character and classifies *
* it to lower case letter, upper case letter or  *
* a digit or not alpha-numeric.                  *
* History:                                       *
*   v1.0.0 2021-03-25, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    char cUserCh;

    std::cout << "Please enter a single character: ";
    std::cin >> cUserCh;

    if ((cUserCh >= 'A') && (cUserCh <= 'Z'))
    {
        std::cout << cUserCh << " is upper case letter." << std::endl;
    }
    else if ((cUserCh >= 'a') && (cUserCh <= 'z'))
    {
        std::cout << cUserCh << " is lower case letter." << std::endl;
    }
    else if ((cUserCh >= '0') && (cUserCh <= '9'))
    {
        std::cout << cUserCh << " is digit." << std::endl;
    }
    else
    {
        std::cout << cUserCh << " is not alpha-numeric character." << std::endl;
    }

    return 0;
} // closes main(void)
