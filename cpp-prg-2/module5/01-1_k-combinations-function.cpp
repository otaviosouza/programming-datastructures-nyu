/*************************************************
* 01_k-combinations-function.cpp - Module 5      *
* Write a program that reads from the user       *
* two positive integers n, k (n >= k), and       *
* prints the value of n choose k.                *
* History:                                       *
*   v1.0.0 2021-04-11, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int Factorial(int number);
int KCombinations(int n, int k);
int main(void)
{
    int n, k, k_comb;
    std::cout << "Please enter n and k (k <= n): ";
    std::cin >> n >> k;

    k_comb = KCombinations(n, k);

    std::cout << n << " choose " << k << " is " << k_comb << std::endl;

    return 0;
} // closes main(void)

int Factorial(int number)
{
    int fact_result = 1;

    for (int i = 1; i <= number; i++)
    {
        fact_result *= i;
    }
    return fact_result;
} // closes factorial(int number)

int KCombinations(int n, int k)
{
    int n_fact = 1, k_fact = 1;
    int n_minus_k_fact = 1;

    n_fact = Factorial(n);
    k_fact = Factorial(k);
    n_minus_k_fact = Factorial(n - k);

    return (n_fact / (k_fact * n_minus_k_fact));

} // closes KCombinations(int n, int k)
