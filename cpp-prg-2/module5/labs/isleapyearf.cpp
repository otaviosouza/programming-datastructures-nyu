/*************************************************************
* isleapyearf.cpp - Module 5 Labs                            *
* Write a function that takes in a year as input and returns *
* True if the year is a leap year, return False otherwise.   *
* The name of the function should be isleapyear and the      *
* function should take one parameter which is the year       *
* to test.                                                   *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-04-11, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>

bool isleapyear(int inyear);

// This program displays whether a given year is leap or not.
// Input from user: a year (hard coded for test purporse).
// Output to user: prints an appropriate message.
// Assumptions: given year is in the past.
int main(void)
{
    int my_birthyear = 2000;

    if (isleapyear(my_birthyear))
    {
        std::cout << "Year " << my_birthyear << " was a leap year." << std::endl;
    }
    else
    {
        std::cout << "Year " << my_birthyear << " was not a leap year." << std::endl;
    }

    return 0;
} // closes main()

// isleapyear: Determines whether a year is leap or not
// Input: inyear - a year to be evaluated
// Output: Returns True if the year is a leap year, return False otherwise
bool isleapyear(int inyear)
{
    bool div_4 = (inyear % 4 == 0);
    bool div_100 = (inyear % 100 == 0);
    bool div_400 = (inyear % 400 == 0);

    if ((div_4 && !div_100) || (div_4 && div_100 && div_400))
    {
        return true;
    }
    return false;
} // closes isleapyear()