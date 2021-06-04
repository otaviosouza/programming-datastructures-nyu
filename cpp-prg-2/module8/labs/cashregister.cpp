/*************************************************************
* cashregister.cpp - Module 8 Labs                           *
* Write a program that computes how much a customer has      *
* to pay after purchasing two items.                         *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-06-04, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

float get_smaller(float prices[]);
float calc_discount(float prices[], char club_card);
float calc_total(float after_discounts, float tax_rate);
void display_total(float prices[], char club_card, float tax_rate);

const int ITEMS = 2;

// This program calculates the total purchase price of two items.
// Input from user: prices of purchased items.
// Output to user: the amount of money to pay (after tax).
int main(void)
{
    float prices[ITEMS];
    float tax_rate;
    char club_card;

    std::cout << "Please enter the price of the first item: ";
    std::cin >> prices[0];
    std::cout << "Please enter the price of the second item: ";
    std::cin >> prices[1];
    std::cout << "Does the customer have a club card? (Y/N): ";
    std::cin >> club_card;
    std::cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    std::cin >> tax_rate;

    display_total(prices, club_card, tax_rate);

    return 0;
} // closes main(void)

// get_smaller: Gets the smaller of two prices
float get_smaller(float prices[])
{
    return prices[0] <= prices[1] ? prices[0] : prices[1];

} // closes get_smaller(float [])

// calc_base: calculates base price
float calc_base(float prices[])
{
    return prices[0] + prices[1];

} // closes calc_base(float [])

// calc_discount: calculates price after discounts
float calc_discount(float prices[], char club_card)
{
    float base, smaller = get_smaller(prices);
    float half_off = smaller * 0.5;

    base = smaller == prices[0] ? half_off + prices[1] : half_off + prices[0];

    if (club_card == 'y' || club_card == 'Y')
        return base * 0.9;

    return base;

} // closes calc_discount(float [], char)

// calc_discount: calculates price after discounts
float calc_total(float after_discounts, float tax_rate)
{
    return after_discounts * (1 + (tax_rate / 100));

} // closes calc_total(float, float)

// bmimetricf: Calculates the user's BMI
// Input: weight, height - parameters for BMI calculation
// Output: returns the BMI
void display_total(float prices[], char club_card, float tax_rate)
{
    float base_price = calc_base(prices);
    float after_discounts = calc_discount(prices, club_card);
    float total_price = calc_total(after_discounts, tax_rate);

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Base price: " << base_price << std::endl;
    std::cout << "Price after discounts: " << after_discounts << std::endl;
    std::cout << "Total price: " << total_price << std::endl;

} // closes display_total(float [], char, float)
