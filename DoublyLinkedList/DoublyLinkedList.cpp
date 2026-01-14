// DoublyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Node.h"
#include "DLL.h"
int main()
{
	Node* n1 = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	Node* n5 = new Node(5);
	Node* n6 = new Node(6);
	DLL myList;
	if(myList.empty()==true)
		cout << "\n The list is now empty\n";
	/*myList.insert(n1);
	myList.display();
	myList.insert(n2, n1);
	myList.insert(n3, n2);
	myList.display();
	myList.insert(n4);
	myList.display();
	myList.erase(n2);
	myList.display();
	myList.erase(n4);
	myList.display();*/

	myList.insert(n1);
	myList.display();
	myList.insert(n2,n1);
	myList.display();
	myList.insert(n3,n2);
	myList.display();
	myList.insert(n4,n3);
	myList.display();
	myList.insert_s(n5, n2);
	myList.display();
	myList.insert_s(n6, n1);
	myList.display();
	

	return 0;

}


