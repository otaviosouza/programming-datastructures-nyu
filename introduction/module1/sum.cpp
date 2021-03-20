/**************************************
* sum.cpp - Week 1                    *
* It reads two integers from the user *
* and prints their sum                *
* History:                            *
*   v1.0.0 2021-03-16, Otávio Souza   *
*     - first issue                   *
***************************************/
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
