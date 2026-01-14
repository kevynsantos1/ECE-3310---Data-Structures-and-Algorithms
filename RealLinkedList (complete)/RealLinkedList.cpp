// RealLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Node.h"
#include "LList.h"

int main()
{
	Node* n1 = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	Node* n5 = new Node(5);
	LList myList;
	if (myList.empty())
	{
		cout << "The list is empty\n";
	}

	myList.insert(n1, nullptr);
	myList.display();
	myList.insert(n2, n1);
	myList.insert(n3, n2);
	myList.insert(n4, n3);
	myList.display();
	myList.insert(n5, nullptr);
	myList.display();
	myList.erase(n1);
	myList.display();
	myList.erase(nullptr);
	myList.display();
	int key = 0;
	cout << "\nEnter a number to search ";
	cin >> key;
	if (myList.check_existance(key) == true)
		cout << "\nThe number you entered exists\n";
	else
		cout << "\nThe number you entered does not exist \n";
	return 0;


}