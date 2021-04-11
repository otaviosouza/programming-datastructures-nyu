/*************************************************
* gradeclass.cpp - Module 3 Labs                 *
* Inputs two grades separated by a space and     *
* out prints a message with the grade result.    *
* History:                                       *
*   v1.0.0 2021-03-26, Otávio Souza              *
*     - first release                            *
*************************************************/
#include <iostream>

int main(void)
{
    float fGrade1, fGrade2;

    std::cout << "Please enter 2 grades, separated by a space: ";
    std::cin >> fGrade1 >> fGrade2;

    if ((fGrade1 < 60) && (fGrade2 < 60))
    {
        std::cout << "Student Failed :(" << std::endl;
    }
    else if ((fGrade1 >= 95) && (fGrade2 >= 95))
    {
        std::cout << "Student Graduated with Honors :(" << std::endl;
    }
    else
    {
        std::cout << "Student Graduated!" << std::endl;
    }

    return 0;
} // closes main(void)
