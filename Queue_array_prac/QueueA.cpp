#include "QueueA.h"
using namespace std;
#include <iostream>

QueueA::QueueA()
{
	qfront = 0;
	qback = 0;
	Q_size = 0;
}

bool QueueA::empty()
{
	if (Q_size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void QueueA::enqueue(QElement item)
{
	if (Q_size == CAPACITY)
	{
		cout << "\n QUEUE IS FULL";
	}
	else
	{
		QArray[qback] = item;
		qback = (qback + 1) % CAPACITY;
		Q_size++;
		cout << "\n After enqueue, qfront is now " << qfront << " , ";
		cout << "qback is now " << qback << "\t";
		cout << "Q size is " << Q_size;
	}
}

QElement QueueA::dequeue()
{
	if (empty())
	{
		cout << "\n Queue is empty, cannot dequeue\n";
	}
	else
	{
		result = QArray[qfront];
		qfront = (qfront + 1) % CAPACITY;
		cout << "\n After dequeue, qfront is now " << qfront << " , ";
		cout << "qback is now " << qback << "\t";
		Q_size--;
		cout << "Q size is now " << Q_size << "\n";
	}
	return result;
}

void QueueA::display()
{
	int i = 0;
	int current = qfront;
	cout << "\n At display, qfront is now " << qfront << " , ";
	cout << " qback is now " << qback << "\t";
	cout << " Q size is " << Q_size;
	if (empty())
	{
		cout << " The queue is empty";
	}
	else
	{
		cout << "\n Queue's contents: ";
		while (i < Q_size)
		{
			cout << QArray[current] << " , ";
			current = (current + 1) % CAPACITY;
			i++;
		}
		cout << endl;
	}
}