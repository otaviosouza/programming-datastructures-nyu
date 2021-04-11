/***********************************************************
* fibonacci.cpp - Module 4 Labs                            *
* Write a program that reads a positive                    *
* integer n, and prints the first n Fibonacci Numbers      *
* History:                                                 *
*   v1.0.0 2021-04-10, Otávio Souza                        *
*     - first release                                      *
***********************************************************/

#include <iostream>

void PrintFibonacci(int number);

int main(void)
{
    int user_input;

    std::cout << "Please enter a positive integer greater than 1: ";
    std::cin >> user_input;

    if (user_input > 1)
    {
        PrintFibonacci(user_input);
    }
    else
    {
        std::cout << user_input << " is not a positive integer greater than 1." << std::endl;
        std::cout << "Closing the program." << std::endl;
    }

    return 0;
} // closes main(void)

void PrintFibonacci(int number)
{
    int curr_number = 1, previous_number = 0;
    int swap;

    std::cout << curr_number << std::endl;

    for (int i = 1; i < number; i++)
    {
        swap = curr_number;
        curr_number += previous_number;
        previous_number = swap;
        std::cout << curr_number << std::endl;
    }
} // closes PrintFibonacci(int number)