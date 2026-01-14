#pragma once
#include "Node.h"
class Queue {
public:
	Node* qfront;
	Node* qback;
	Queue();
	bool empty();
	void enqueue(Node* newNode);
	Node* dequeue();
	Node* front();
	void display();
};