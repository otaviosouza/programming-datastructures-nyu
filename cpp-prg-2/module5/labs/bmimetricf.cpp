/*************************************************************
* bmimetricf.cpp - Module 5 Labs                             *
* Write a function that takes two parameters, weight and     *
* the height and calculates the BMI with two decimal places. *
* The name of the function should be bmimetricf.             *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-04-11, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

float bmimetricf(int weight, float height);

// This program displays the BMI (Body mass index).
// Input from user: weight and height (both hard coded for test purporse).
// Output to user: the BMI with two decimal places.
// Assumptions: weight in kilograms and the height in meters
int main(void)
{
    int weight_kg = 50;
    float height_m = 1.58;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Your BMI is " << bmimetricf(weight_kg, height_m) << ".\n";

    return 0;
} // closes main()

// bmimetricf: Calculates the user's BMI
// Input: weight, height - parameters for BMI calculation
// Output: returns the BMI with two decimal places
float bmimetricf(int weight, float height)
{
    return weight / pow(height, 2);
} // closes bmimetricf()