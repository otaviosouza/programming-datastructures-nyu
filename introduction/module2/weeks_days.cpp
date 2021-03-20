/**************************************
* weeks_days.cpp - Week 2             *
* Reads from the user the number of   *
* days they traveled and print their  *
* traveling time in full weeks and    *
* additional days                     *
* History:                            *
*   v1.0.0 2021-03-20, Otávio Souza   *
*     - first release                 *
***************************************/
#include <iostream>

const int DAYS_WEEK = 7;

int main(void)
{
	int daysTraveled;
	int fullWeeks, remainingDays;

	std::cout << "Please enter the number of days you traveled: ";
	std::cin >> daysTraveled;

	fullWeeks = daysTraveled / DAYS_WEEK;
	remainingDays = daysTraveled % DAYS_WEEK;

	std::cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days." << std::endl;

	return 0;
} // closes main(void)
