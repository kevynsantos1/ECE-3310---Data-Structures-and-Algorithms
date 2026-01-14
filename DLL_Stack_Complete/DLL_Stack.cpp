// DLL_Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "IntStack.h"
#include "Node.h"

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
	while (quotient > 0)
	{
		remainder = quotient % 2;
		quotient = quotient / 2;
		Node* current = new Node(remainder);
		my_stack.push(current);
		cout << current->data << "  ";
		counter++;
	}
	/*my_stack.push(current);
	cout << quotient << "\n";
	counter++;*/
	cout << "\n The binary number for " << n << " is ";
	my_stack.display();

	/*do
	{
		cout << my_stack.pop()->data;
		counter--;
	} while (counter > 0);*/
	

	/*Node* n1 = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);

	IntStack myStack;
	myStack.push(n1);
	myStack.push(n2);
	myStack.push(n3);
	myStack.display();
	myStack.pop();
	myStack.display();
	myStack.pop();
	myStack.display();*/


	return 0;
}

