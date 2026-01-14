// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Queue.h"

int main()
{
	Queue myQ;
	Node* n1 = new Node('s');
	Node* n2 = new Node('l');
	Node* n3 = new Node('e');
	Node* n4 = new Node('e');
	Node* n5 = new Node('p');
	if (myQ.swap_front_back() == false)
		cout << "\n The queue is empty \n";
	else
	 {
		cout << "\n The queue contains ";
	  myQ.display();
	 }
	myQ.enqueue(n1);
	myQ.swap_front_back();
	myQ.display(); //print out "s"
	myQ.enqueue(n2); 
	myQ.enqueue(n3);
	myQ.enqueue(n4);
	myQ.enqueue(n5);
	myQ.display();//print out "sleep"
	myQ.swap_front_back();
	myQ.display();//print out "plees"
	myQ.dequeue();
	myQ.display();//print out "lees"
	
	return 0;
}
 