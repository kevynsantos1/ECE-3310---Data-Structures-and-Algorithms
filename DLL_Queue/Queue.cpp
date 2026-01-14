#include "Queue.h"
using namespace std;
#include <iostream>

Queue::Queue()
{
	qfront = nullptr;
	qback = nullptr;
}

bool Queue::empty()
{
	if ((qfront == nullptr) && (qback == nullptr))
		return true;
	else
		return false;
}

void Queue::enqueue(Node * newNode)
{
	if (empty())
	{
		qfront = newNode;
		qback = newNode;
	}
	else
	{
		qback->next = newNode;
		newNode->prev = qback;
		qback = newNode;
	}

}

Node* Queue::dequeue()
{
	Node* temp = nullptr;
	temp = qfront;
	if (empty())
	{
		cout << "\nThe queue is empty\n";
	}
	else
	{
		if (qfront == qback)
		{
			qfront = nullptr;
			qback = nullptr;
		}
		else
		{
			/*qfront = temp->next;
			temp->next->prev = nullptr;
			temp->next = nullptr;*/

			qfront->next->prev = nullptr;
			qfront = qfront->next;
			temp->next = nullptr;

		}
	}
	return temp;
}

Node* Queue::front()
{
	Node* temp = nullptr;
	if (empty())
	{
		cout << "\nThe queue is empty";
	}
	else
	{
		temp = qfront;
	}
	return qfront;
}

void Queue::display()
{
	Node* current = qfront;
	cout << "\nThe order in line is ";
	while (current != nullptr)
	{
		cout << current->data << ", ";
		current = current->next;
	}
}

void Queue::reverse_display()
{
	Node* current = qback;
	cout << "\nThe reverse order in line is ";
	while (current != nullptr)
	{
		cout << current->data << ", ";
		current = current->prev;
	}
}