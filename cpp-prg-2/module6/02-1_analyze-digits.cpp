/*************************************************
* 02-1_analyze-digits.cpp - Module 6             *
* Write a program that reads a positive          *
* integer num, and prints the number of digits   *
* in num and their sum.                          *
* History:                                       *
*   v1.0.0 2021-04-11, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int AnalyzeDigits(int num, int &out_sum);
int main(void)
{

    int user_input;
    int count_digits = 0, sum_digits = 0;

    std::cout << "Please enter a positive integer: ";
    std::cin >> user_input;

    count_digits = AnalyzeDigits(user_input, sum_digits);

    std::cout << user_input << " has " << count_digits << " digits and their sum is " << sum_digits << std::endl;

    return 0;
} // closes main()

int AnalyzeDigits(int num, int &out_sum)
{
    int count = 0, sum = 0;
    int curr_digit;

    while (num > 0)
    {
        curr_digit = num % 10;
        sum += curr_digit;
        num /= 10;
        count++;
    }

    out_sum = sum;
    return count;
} // closes AnalyzeDigits()
