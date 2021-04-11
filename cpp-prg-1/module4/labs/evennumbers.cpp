/*************************************************
* evennumbers.cpp - Module 4 Labs                *
* Write a program that reads a positive          *
* integer n, and prints the first n even numbers *
* History:                                       *
*   v1.0.0 2021-04-10, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

void PrintEven(int number);

int main(void)
{
    int user_input;

    std::cout << "Please enter a positive integer: ";
    std::cin >> user_input;

    if (user_input > 0)
    {
        PrintEven(user_input);
    }
    else
    {
        std::cout << user_input << " is not a positive integer." << std::endl;
        std::cout << "Closing the program." << std::endl;
    }

    return 0;
} // closes main(void)

void PrintEven(int number)
{
    int curr_number = 2, count = 1;
    if (number > 1)
    {
        while (count <= number)
        {
            if (curr_number % 2 == 0)
            {
                std::cout << curr_number << std::endl;
                count++;
            }
            curr_number++;
        }
    }
    else
    {
        std::cout << curr_number << std::endl;
    }

} // closes PrintEven(int number)