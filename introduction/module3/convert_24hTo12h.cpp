/*************************************************
* convert_24hTo12h.cpp - Module 3                *
* Reads from the user a time entered in a        *
* 24-hour format and out prints the equivalent   *
* time in a 12-hour format.                      *
* History:                                       *
*   v1.0.0 2021-03-25, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>
#include <string>

int main(void)
{
    int n24hour, n24min;
    int n12hour, n12min;
    std::string sPeriod;
    char temp;

    std::cout << "Please enter a time in a 24-hour format: ";
    std::cin >> n24hour >> temp >> n24min;

    n12min = n24min;
    if (((n24hour < 12) && (n24hour >= 0)) || (n24hour == 24))
        sPeriod = "am";
    else
        sPeriod = "pm";

    if (n24hour == 0)
        n12hour = 12;
    else if ((n24hour <= 12) && (n24hour > 0))
        n12hour = n24hour;
    else
        n12hour = n24hour % 12;

    std::cout << n12hour << temp << n12min << sPeriod << std::endl;

    return 0;
} // closes main(void)
