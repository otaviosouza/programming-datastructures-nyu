/*************************************************************
* avgoflst.cpp - Module 7 Labs                               *
* Implement function avgoflst(lst), which returns the        *
* average value of the elements in the array.                *
* The name of the method should be avgoflst and the method   *
* should take two parameters. The first parameter is the     *
* array of values to test. The second parameter is the       *
* number of elements in the array.                           *
*                                                            *
* History:                                                   *
*   v1.0.0 2021-06-04, Otávio Souza                          *
*     - first release                                        *
*************************************************************/

#include <iomanip>
#include <iostream>

float avgoflst(int lst[], int size);

int main(void)
{
    int lst[] = {19, 2, 20, 1, 0, 18};
    int lst_length = *(&lst + 1) - lst;
    std::cout << "AVG: " << std::fixed << std::setprecision(2) << avgoflst(lst, lst_length) << std::endl;
    return 0;
} // closes main()

float avgoflst(int lst[], int size)
{
    float sum;

    for (int i = 0; i < size; i++)
    {
        sum += lst[i];
    }

    return (sum / (float)size);

} // avgoflst()