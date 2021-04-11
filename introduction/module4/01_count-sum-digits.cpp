/*************************************************
* 01_count-sum-digits.cpp - Module 4             *
* Write a program that reads a positive          *
* integer num, and prints the number of digits   *
* in num and their sum.                          *
* History:                                       *
*   v1.0.0 2021-04-10, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    int user_input, input_cp;
    int count_digits = 0, sum_digits = 0;
    int curr_digit;

    std::cout << "Enter a positive integer: ";
    std::cin >> user_input;

    input_cp = user_input;

    while (input_cp > 0)
    {
        curr_digit = input_cp % 10;
        sum_digits += curr_digit;
        input_cp /= 10;
        count_digits++;
    }

    std::cout << "Given number is: " << user_input << std::endl;

    std::cout << user_input << " has " << count_digits << " digits and their sum is " << sum_digits << std::endl;

    return 0;
} // closes main(void)
