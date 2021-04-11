/*************************************************
* 01_k-combinations.cpp - Module 5               *
* Write a program that reads from the user       *
* two positive integers n, k (n >= k), and       *
* prints the value of n choose k.                *
* History:                                       *
*   v1.0.0 2021-04-11, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>

int main(void)
{
    int n, k, n_fact = 1, k_fact = 1;
    int n_minus_k_fact = 1, k_comb;
    std::cout << "Please enter n and k (k <= n): ";
    std::cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        n_fact *= i;
    }

    for (int i = 1; i <= k; i++)
    {
        k_fact *= i;
    }

    for (int i = 1; i <= (n - k); i++)
    {
        n_minus_k_fact *= i;
    }

    k_comb = n_fact / (k_fact * n_minus_k_fact);

    std::cout << n << " choose " << k << " is " << k_comb << std::endl;

    return 0;
} // closes main(void)
