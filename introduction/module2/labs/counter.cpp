/************************************************
* counter.cpp - Module 2 Lab                    *
* Asks the user to enter a number of            *
* quarters, dimes, nickels and pennies and      *
* then outputs the monetary value of the coins. *
* History:                                      *
*   v1.0.0 2021-03-20, Otávio Souza             *
*     - first release                           *
*************************************************/
#include <iostream>

int main(void)
{
    int nQuarter, nDime, nNickel, nPenny;
    int nDollar, nCent;
    double fAccount;

    // asks the user to enter the number of coins
    std::cout << "Please enter the number of coins:" << std::endl;
    std::cout << "# of quarters: "; // 25 cents
    std::cin >> nQuarter;
    std::cout << "# of dimes: "; // 10 cents
    std::cin >> nDime;
    std::cout << "# of nickels: "; // 5 cents
    std::cin >> nNickel;
    std::cout << "# of pennies: "; // 1 cent
    std::cin >> nPenny;

    // does the accounting
    fAccount = (nQuarter * 0.25) + (nDime * 0.10) + (nNickel * 0.05) + (nPenny * 0.01);
    nDollar = (int)fAccount;
    nCent = (fAccount - nDollar) * 100;

    // outputs the monetary value
    std::cout << "The total is " << nDollar << " dollar and " << nCent << " cents." << std::endl;

    return 0;
} // closes main(void)
