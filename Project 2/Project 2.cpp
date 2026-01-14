// Project 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Node.h"
#include "DLL.h"

int main()
{
	Node* n1 = new Node(8,0);
	Node* n2 = new Node(3,2);
	Node* n3 = new Node(5,4);
	Node* n4 = new Node(2,5);
	Node* n5 = new Node(6,86);
	DLL p1;

	p1.insert(n1);
	p1.insert(n2, n1);
	p1.insert(n3, n2);
	p1.insert(n4, n3);
	p1.insert(n5, n4);

	Node* n6 = new Node(3, 0);
	Node* n7 = new Node(4, 2);
	Node* n8 = new Node(7, 3);
	Node* n9 = new Node(11, 5);
	DLL p2;

	p2.insert(n6);
	p2.insert(n7, n6);
	p2.insert(n8, n7);
	p2.insert(n9, n8);


	cout << "Display of P1: ";
	p1.display();
	cout<<endl;
	cout << "Display of P2: ";
	p2.display();
	cout << endl;

	cout << "Reverse Display of P1: ";
	p1.display_r();
	cout << endl;
	cout << "Reverse Display of P2: ";
	p2.display_r();
	cout << endl;

	DLL p3;
	
	p3 = p3.add(p1, p2);

	cout << "Display of P3: ";
	p3.display_r();
	cout << endl;
	cout<< "Reverse Display of P3: ";
	p3.display(); 
	cout << endl; 

}


