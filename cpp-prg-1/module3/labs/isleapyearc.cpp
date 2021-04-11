/*************************************************
* isleapyearc.cpp - Module 3 Labs                *
* a program for determining if a year is a       *
* leap year in the Gregorian calendar system.    *
* History:                                       *
*   v1.0.1 2021-04-11, Otávio Souza              *
*     - shorten if statements                    *
*   v1.0.0 2021-03-26, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int nYear, nCurrYear = 2021;
    std::string sVerb, sYear;

    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " YEAR" << std::endl;
        return 1;
    }

    // sYear = argv[1];
    nYear = atoi(argv[1]);

    (nYear > nCurrYear) ? sVerb = "will be" : sVerb = "was";

    if (((nYear % 4 == 0) && (nYear % 100 != 0)) || ((nYear % 4 == 0) && (nYear % 100 == 0) && (nYear % 400 == 0)))
    {
        std::cout << nYear << " " << sVerb << " a leap year" << std::endl;
    }
    else
    {
        std::cout << nYear << " " << sVerb << " not a leap year" << std::endl;
    }

    return 0;
} // closes main(void)
