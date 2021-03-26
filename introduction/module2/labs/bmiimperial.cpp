/**********************************************************
* bmimetric.cpp - Module 2 Lab                            *
* Write a program that prompts for weight in pounds and   *
* height in inches, converts the values to metric, and    *
* outputs the BMI with two decimal places.                *
* History:                                                *
*   v1.0.0 2021-03-20, Otávio Souza                       *
*     - first release                                     *
***********************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

const double POUND_KG = 0.453592;
const double INCH_M = 0.0254;
int main(void)
{
    double dWeight, dHeight, dBMI;

    // asks the user to enter the number of coins
    std::cout << "Please enter weight in pounds: ";
    std::cin >> dWeight;
    std::cout << "Please enter height in inches: ";
    std::cin >> dHeight;

    // BMI calculation
    dBMI = (dWeight * POUND_KG) / pow((dHeight * INCH_M), 2);

    // outputs BMI
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "BMI is " << dBMI << '.' << std::endl;

    return 0;
} // closes main(void)
