/*************************************************
* sum.cpp - Module 1                             *
* Reads from the user two integers and           *
* out prints their sum.                          *
* History:                                       *
*   v1.0.0 2021-03-16, Otávio Souza              *
*     - first release                            *
*************************************************/

#include <iostream>
using namespace std;

int main()
{
	// declaration of variables
	int num1;
	int num2;
	int sum;

	// interaction with the user
	cout << "Please enter two numbers separated by a space:" << endl;
	cin >> num1 >> num2;

	sum = num1 + num2;

	cout << num1 << " + " << num2 << " = " << sum << endl;

	return 0;
} // main(void)
