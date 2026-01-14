// StackPrac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "IntStack.h"

int main()
{
	int n = 0;
	int quotient = 0;
	int remainder = 0;
	int counter = 0;
	cout << "\n Enter an integer to convert to binary \n";
	cin >> n;
	quotient = n;
	IntStack my_stack;
	while (quotient > 1)
	{
		remainder = quotient % 2;
		quotient = quotient / 2;
		my_stack.push(remainder);
		cout << remainder << "  ";
		counter++;
	}
	my_stack.push(quotient);
	cout << quotient << "\n";
	counter++;
	/*cout << "\n The binary number for " << n << " is ";
	do
	{
		cout << my_stack.pop();
		counter--;
	} while (counter > 0);
*/
	cout << "\n The contents are: ";
	my_stack.display();
	cout << endl;

	my_stack.display_b_to_t();

	return 0;
    



}

