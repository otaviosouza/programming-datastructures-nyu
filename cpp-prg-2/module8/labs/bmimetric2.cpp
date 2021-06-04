/*************************************************************
* bmimetric2.cpp - Module 8 Labs                             *
* Write a function that takes two parameters, weight and     *
* the height and calculates the BMI with two decimal places  *
* and display the CDC standard weight status categories.     *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-06-04, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

float bmimetricf(int weight, float height);
void print_bmi(float bmi);

// This program displays the BMI (Body mass index).
// Input from user: weight and height.
// Output to user: the BMI with two decimal places.
// Assumptions: weight in kilograms and the height in meters
int main(void)
{
    int weight_kg;
    float height_m;

    std::cout << "Please  enter weight in kilograms (xx): ";
    std::cin >> weight_kg;
    std::cout << "Please  enter height in meters (x.xx): ";
    std::cin >> height_m;

    print_bmi(bmimetricf(weight_kg, height_m));

    return 0;
} // closes main(void)

// bmimetricf: Calculates the user's BMI
// Input: weight, height - parameters for BMI calculation
// Output: returns the BMI
float bmimetricf(int weight, float height)
{
    return weight / pow(height, 2);
} // closes bmimetricf(int, float)

// print_bmi: Prints the user's BMI
// Input: bmi - calculated by bmimetricf
// Output: prints the BMI with two decimal places and display the CDC standard
void print_bmi(float bmi)
{
    std::string cdc_status[] = {"Underweight", "Normal", "Overweight", "Obese"};
    int i = 0;

    if (bmi >= 18.5 && bmi < 25.0)
        i = 1;
    else if (bmi >= 25.0 && bmi < 30.0)
        i = 2;
    else if (bmi >= 30.0)
        i = 3;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Your BMI is " << bmi << ", and the CDC status is " << cdc_status[i] << ".\n";
} // closes print_bmi(float)