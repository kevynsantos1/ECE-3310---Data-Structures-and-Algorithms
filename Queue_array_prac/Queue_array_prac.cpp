// Queue_array_prac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QueueA.h"
int main()
{
	int ran1 = 3 + rand() % 8;
	int ran2 = 3 + rand() % 8;
	int ran3 = 3 + rand() % 8;

	QueueA line;

	line.enqueue(ran1);
	line.enqueue(ran2);
	line.enqueue(ran3);

	line.dequeue();

	int ran4 = 11 + rand() % 10;
	int ran5 = 11 + rand() % 10;
	int ran6 = 11 + rand() % 10;

	line.enqueue(ran4);
	line.enqueue(ran5);
	line.enqueue(ran6);

	line.display();
}
