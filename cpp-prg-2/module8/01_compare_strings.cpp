/*************************************************
* 01_compare_strings.cpp - Module 8              *
* Write a program that reads three words and     *
* prints the smallest of the three.              *
*                                                *
* History:                                       *
*   v1.0.0 2021-06-04, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>
#include <string>

int main(void)
{
    std::string word1, word2, word3;

    std::cout << "Please enter 3 words separated by a space: ";
    std::cin >> word1 >> word2 >> word3;

    if (word1 <= word2 && word1 <= word3)
        std::cout << word1 << std::endl;
    else if (word2 <= word1 && word2 <= word3)
        std::cout << word2 << std::endl;
    else
        std::cout << word3 << std::endl;

    return 0;
} // closes main(void)