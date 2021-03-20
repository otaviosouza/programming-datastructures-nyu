/*********************************************
* circle_area.cpp - Week 2                   *
* Reads from the user a radius of a circle   *
* and then outputs the area of this circle   *
* History:                                   *
*   v1.0.0 2021-03-20, Otávio Souza          *
*     - first release                        *
**********************************************/
#include <iostream>
#include <cmath>

int main(void)
{
	float circleArea, circleRadius;

	std::cout << "Please enter the radius of a circle: ";
	std::cin >> circleRadius;

	circleArea = M_PI * pow(circleRadius, 2);

	std::cout << "The area of a circle with radius of " << circleRadius << " is " << circleArea << "." << std::endl;

	return 0;
} // closes main(void)
