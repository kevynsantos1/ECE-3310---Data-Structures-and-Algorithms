// PointerPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	int deez = 5;
	int* pointDeez = 0; // Type* pointerVar, Type *pointerVar, or Type * pointerVar are all the same.

	pointDeez = &deez;

	cout << "Address is " << pointDeez;
	*/


	/*
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	*/

	int i = 11,
		j = 22;

	double d = 3.3,
		e = 4.4;

	int * iPtr,
		* jPtr;

	double* dPtr,
		* ePtr;

	iPtr = &i;
	jPtr = &j;
	dPtr = &d;
	ePtr = &e;

	cout << "&i = " << iPtr << endl;
	cout << "&j = " << jPtr << endl;
	cout << "&d = " << dPtr << endl;
	cout << "&e = " << ePtr << endl;
}

