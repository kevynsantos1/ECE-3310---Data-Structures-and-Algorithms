// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define n 100

bool linear_search(int arrayx[], int size, int key)// O(n)
{
	bool found = false;
	int current_inx = 0;
	cout << "The key is " << key;
	while ((found == false) && (current_inx < size))
	{//cout<<" item "<inx<<" is "<<arrayx[current_inx];
		if (arrayx[current_inx] == key)
			found = true;
		else
			current_inx = current_inx + 1;
	}
	return found;
}

void selection_sort(int arrayx[], int size)// O(n^2)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arrayx[j] > arrayx[i])
			{
				temp = arrayx[j];
				arrayx[j] = arrayx[i];
				arrayx[i] = temp;
				
			}

		}
	}
}

void print_array(int arrayx[], int size)// O(n)
{
	for (int i = 0; i < size; i++)
	{
		cout << arrayx[i] << "\n";
	}
}

bool binary_search(int arrayx[], int size, int key)// O(n)
{
	bool found = false;
	int low = 0;
	int high = size - 1;
	int middle = (high + low + 1) / 2;
	while ((low <= high) && (found == false))
	{
		if (arrayx[middle] == key)
			found = true;
		else
		{
			if (key < arrayx[middle])
			{
				high = middle - 1;
			}
			else //key>arrayx[middle]
			{
				low = middle + 1;
			}
		}
		middle = (high + low + 1) / 2;
	}
	return found;
}



int main() // O(n)
{
	int my_array[n];
	int key = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		my_array[i] = 60 + rand() % 41;
		cout << my_array[i] << "\t";
	}
	cout << "\nEnter a number you want to search\n";
	cin >> key;

	if (linear_search(my_array, n, key) == true)
	{
		cout << "\nThe key exists";
	}
	else
	{
		cout << "\nThe key does not exist";
	}
	
	selection_sort(my_array, n);
	print_array(my_array, n);

	if (binary_search(my_array, n, key) == true)
		{
			cout << "\nThe key exists";
		}
	else
		{
			cout << "\nThe key does not exist";
		}

	
}





