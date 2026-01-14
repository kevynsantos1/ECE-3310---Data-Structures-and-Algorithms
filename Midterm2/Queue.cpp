#include <iostream>
using namespace std;
#include "Queue.h"
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
void Queue::enqueue(Node* newNode)
{
	if (empty() == true)
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
{   Node* temp =new Node(' ');
temp = qfront;
	if (empty() == true)
		cout << "\n The queue is empty \n";
	else
	{
		if (qfront == qback)
		{
			qfront = nullptr;
			qback = nullptr;
		}
		else
		{
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
	temp = qfront;
	if (empty())
		cout << "\n The queue is empty";
	else
		temp = qfront;
	return temp;
}
void Queue::display()
{
	Node* current = qfront;
	if (qfront == nullptr)
		cout << "\n The queue is empty";
	else
	{
		cout << "\n";
		while (current != nullptr)
		{
			cout << current->data << ", ";
			current = current->next;
		}
	}
}
bool Queue::swap_front_back()
{
	Node* tempf = nullptr;
	Node* tempb = nullptr;

	if (empty())
	{
		return false;
	}
	else
	{
		if (qfront == qback)
		{
			cout << "\n There is only one object in queue, swap cannot be done";
		}
		else
		{
			tempf = qfront;
			tempb = qback;

			tempb->next = tempf->next;
			tempf->next->prev = tempb;

			tempf->prev = tempb->prev;
			tempb->prev->next = tempf;

			tempf->next = nullptr;
			tempb->prev = nullptr;

			qfront = tempb;
			qback = tempf;
			

		}
		return true;
	}


}