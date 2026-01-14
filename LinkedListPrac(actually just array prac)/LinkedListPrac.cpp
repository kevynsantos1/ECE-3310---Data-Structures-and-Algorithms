// LinkedListPrac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "ListArray.h"

int main()
{
	ListArray scores;

	scores.insert(3, 0);
	scores.insert(2, 1);
	scores.insert(6, 2);
	scores.insert(9, 3);
	scores.insert(1, 4);
	scores.insert(7, 5);
	scores.insert(8, 6);

	if (scores.empty())
		cout << "\nThe list is empty";
	else
	{
		cout << "\nThe list is not empty\n";
	}

	scores.display();

	scores.insert(5, 1);

	cout << "\n";
	scores.display();

	scores.erase(2);
	cout << "\n";
	scores.display();

	scores.erase(0);
	cout << "\n";
	scores.display();

	scores.insert(10, 6);
	cout << "\n";
	scores.display();

	int key = 11;
	int position = 0;
	position = scores.check_existance(key, 0);

	if (position != 0)
		cout << "\nElement " << key << " was found at position: " << position << endl;
	else
		cout << "\nElement " << key << " was not found" << endl;


}

