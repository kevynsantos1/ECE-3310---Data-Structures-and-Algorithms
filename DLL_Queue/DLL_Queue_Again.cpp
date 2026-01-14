// DLL_Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Node.h"
#include "Queue.h"

int main()
{
	Queue line;
	Node* n1 = new Node('k');
	Node* n2 = new Node('j');
	Node* n3 = new Node('s');
	line.enqueue(n1);
	line.enqueue(n2);
	line.enqueue(n3);
	line.display();
	line.dequeue();
	line.display();
	line.reverse_display();

}

