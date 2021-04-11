/**********************************************************
* bmimetric.cpp - Module 2 Lab                            *
* Write a program that prompts for metric weight and      *
* height and outputs the BMI with two decimal places.     *
* History:                                                *
*   v1.0.0 2021-03-20, Otávio Souza                       *
*     - first release                                     *
***********************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
    double dWeight, dHeight, dBMI;

    // asks the user to enter the number of coins
    std::cout << "Please enter weight in kilograms: ";
    std::cin >> dWeight;
    std::cout << "Please enter height in meters: ";
    std::cin >> dHeight;

    // BMI calculation
    dBMI = dWeight / pow(dHeight, 2);

    // outputs BMI
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "BMI is " << dBMI << '.' << std::endl;

    return 0;
} // closes main(void)
