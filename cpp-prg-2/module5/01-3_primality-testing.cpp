/*************************************************
* 01-3_primality-testing.cpp - Module 5          *
* Write a program that reads from the user       *
* an integer and and determines whether the      *
* number is prime or not.                        *
* Assume that the value is greater than two.     *
* History:                                       *
*   v1.0.0 2021-05-16, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>
#include <math.h>

bool IsPrime(int number);
int main(void)
{
    int test = 20;

    // std::cout << IsPrime(test) << std::endl;

    IsPrime(test) ? std::cout << "Is prime" << std::endl : std::cout << "Not prime" << std::endl;

    return 0;
} // closes main(void)

bool IsPrime(int number)
{
    int countDivs = 0;

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            countDivs++;
        }
    }
    return (countDivs == 1);
}
