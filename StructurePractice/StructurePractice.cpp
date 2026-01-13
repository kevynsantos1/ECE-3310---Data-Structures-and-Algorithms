// StructurePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct X_type //this struct takes up 13 bytes. 4 from int, 1 from char, and 8 from double.
{
	int dataA;
	char dataB;
	double dataC;
};

int main()
{
	X_type A[10];
	for (int i = 0; i < 10; i++)	//shows us that each index of the array has the 3 datatypes and are seperate.
	{
		A[i].dataA = i;
		A[i].dataB = char(65);
		A[i].dataC = i * 99.9;
	}


	//this portion of the code shows us the increment of the memory address. It increments in 4 because an int takes up 4 bytes.
	int* ptr = 0;
	int arrayX[10];
	ptr = arrayX;
	for (int i = 0; i < 10; i++)
	{
		arrayX[i] = i;
		ptr++;
		cout << ptr << "\t" << arrayX[i] << "\n";
	}


}

