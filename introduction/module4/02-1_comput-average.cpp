/*************************************************
* 02-1_comput-average.cpp - Module 4             *
* Write a program that reads a sequence of       *
* grades (till -1 is entenred), and prints       *
* the average.                                   *
* History:                                       *
*   v1.0.0 2021-04-10, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iomanip>
#include <iostream>

int main(void)
{
    bool seen_eoi = false; // end of input
    double student_grade = 0, grades_sum = 0;
    double students_average;
    int student_amt = 0;

    std::cout << "Enter the student's grades separated by a space." << std::endl;
    std::cout << "End your sequence by typing -1: ";

    while (seen_eoi == false)
    {
        std::cin >> student_grade;
        if (student_grade != -1)
        {
            grades_sum += student_grade;
            student_amt++;
        }
        else
        {
            seen_eoi = true;
        }
    }

    students_average = grades_sum / (double)student_amt;

    std::cout << "The average is " << std::fixed << std::setprecision(2) << students_average << std::endl;

    return 0;
} // closes main(void)
