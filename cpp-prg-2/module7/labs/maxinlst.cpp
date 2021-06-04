/*************************************************************
* maxinlst.cpp - Module 7 Labs                               *
* Implement function maxinlst(lst), which returns the        *
* maximum value of the elements in the array.                *
* The name of the method should be maxinlst and the method   *
* should take two parameters. The first parameter is the     *
* array of values to test. The second parameter is the       *
* number of elements in the array.                           *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-06-03, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iostream>

int maxinlst(int lst[], int size);

int main(void)
{
    int lst[] = {-19, 26, -3, 20, -20, -1, 5, -25, 21};
    int lst_length = *(&lst + 1) - lst;
    std::cout << "MAX: " << maxinlst(lst, lst_length) << std::endl;
    return 0;
} // closes main()

int maxinlst(int lst[], int size)
{
    int temp, max = lst[0];

    for (int i = 1; i < size; i++)
    {
        temp = lst[i];
        if (temp > max)
        {
            max = temp;
        }
    }

    return max;

} // maxinlst()