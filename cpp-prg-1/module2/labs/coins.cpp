/**********************************************************
* coins.cpp - Module 2 Lab                                *
* Asks the user to enter an amount of money in the format *
* of dollars and remaining cents.                         *
* The program should calculate and the print the minimum  *
* number of coins (quarters, dimes, nickels and pennies)  *
* that are equivalent to the given amount.                *
* History:                                                *
*   v1.0.0 2021-03-20, Otávio Souza                       *
*     - first release                                     *
***********************************************************/
#include <iostream>

int main(void)
{
    int nQuarter, nDime, nNickel, nPenny;
    double dDollar, dCent, dAccount;

    // asks the user to enter the number of coins
    std::cout << "Please enter the amount of money to convert:" << std::endl;
    std::cout << "# of dollars: ";
    std::cin >> dDollar;
    std::cout << "# of cents: ";
    std::cin >> dCent;

    // does the accounting and conversion
    dAccount = (dDollar + (dCent / 100));
    nQuarter = (int)(dAccount / 0.25);
    dAccount = dAccount - (nQuarter * 0.25);
    nDime = (int)(dAccount / 0.10);
    dAccount = dAccount - (nDime * 0.10);
    nNickel = (int)(dAccount / 0.05);
    dAccount = dAccount - (nPenny * 0.01);
    nPenny = (int)(dAccount / 0.01);

    // outputs the monetary value
    std::cout << "The coins are " << nQuarter << " quarters, " << nDime << " dimes, " << nNickel << " nickels and " << nPenny << " pennies." << std::endl;

    return 0;
} // closes main(void)
