#include "Node.h"
#include "Queue.h"

Queue::Queue()
{
	qfront = '\0';
	qback = '\0';
}
bool Queue::empty()
{
	if ((qfront == '\0') && (qback == '\0'))
		return true;
	else
		return false;
}
void Queue::enqueue(Node * newnode)
{
	if (empty() == true)//enqueue the first item
	{
		qback = newnode;
		qfront = qback;
	}
	else
	{
		qback->next = newnode;
		qback = newnode;
	}
}
Node* Queue::dequeue()
{
	Node* temp = '\0';
	temp = front();
	qfront = qfront->next;
	if (qfront == '\0')
	{
		//cout << "\n Queue is empty\n";
		qback = '\0';
	}
	else
	{
		temp->next = '\0';//to ensure the item removed has not connection with the rest of the queue
	}
	return temp;

}
Node* Queue::front()
{
	return qfront;
}
void Queue::display()
{
	Node* current;
	current = qfront;
	if (qfront == '\0')
		cout << "The queue is empty\n";
	else
	{
		while (current != '\0')
		{
			//cout << current->name << " ";
			current = current->next;
		}
		//cout << "\n";
	}
}