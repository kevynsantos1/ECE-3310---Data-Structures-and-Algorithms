#pragma once
#include "Node.h"
class Queue
{
	Node* qfront;
	Node* qback;

public:
	Queue();
	bool empty();
	void enqueue(Node* newNode);
	Node* dequeue();
	Node* front();
	void display();
	void reverse_display();
};