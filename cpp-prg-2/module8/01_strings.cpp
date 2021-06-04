/*************************************************
* 01_strings.cpp - Module 8                      *
* Write a program that reads grades of students  *
* in a class, prints the average and the grades  *
* that are above the average.                    *
* Assume that the number of students is          *
* less than or equal to 60.                      *
* History:                                       *
*   v1.0.0 2021-06-03, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iomanip>
#include <iostream>

const int MAX_CLASS_SIZE = 60;

int main(void)
{
    int student_amt;
    int grades_list[MAX_CLASS_SIZE];
    int curr_grade, ind;
    double grades_sum = 0;
    double students_average;

    std::cout << "Please enter the number of students in class (no more than " << MAX_CLASS_SIZE << "): ";
    std::cin >> student_amt;

    // reading grades
    for (ind = 0; ind < student_amt; ind++)
    {
        std::cout << "Enter the student's grade: ";
        std::cin >> curr_grade;
        grades_list[ind] = curr_grade;
    }

    // calculating the average
    for (ind = 0; ind < student_amt; ind++)
    {
        grades_sum += grades_list[ind];
    }
    students_average = grades_sum / (double)student_amt;
    std::cout << "The average is " << std::fixed << std::setprecision(2) << students_average << std::endl;

    // print grades above the average
    std::cout << "Grades above average: ";
    for (ind = 0; ind < student_amt; ind++)
    {
        if (grades_list[ind] > students_average)
        {
            std::cout << grades_list[ind] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
} // closes main(void)