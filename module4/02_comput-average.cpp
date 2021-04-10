/*************************************************
* 02_comput-average.cpp - Module 4               *
* Write a program that reads grades of students  *
* in a class, and prints the average.            *
* History:                                       *
*   v1.0.0 2021-04-10, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iomanip>
#include <iostream>

int main(void)
{
    int student_amt;
    double student_grade, grades_sum = 0;
    double students_average;

    std::cout << "Please enter the number of students in class: ";
    std::cin >> student_amt;

    std::cout << "Enter the student's grades (separate by a space): ";

    for (int i = 0; i < student_amt; i++)
    {
        std::cin >> student_grade;
        grades_sum += student_grade;
    }

    students_average = grades_sum / (double)student_amt;

    std::cout << "The average is " << std::fixed << std::setprecision(2) << students_average << std::endl;

    return 0;
} // closes main(void)
