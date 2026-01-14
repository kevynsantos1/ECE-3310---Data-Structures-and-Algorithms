#pragma once
#define CAPACITY 5
typedef int QElement;
class QueueA
{
	QElement QArray[CAPACITY];
	int qfront;
	int qback;
	int Q_size;
	int result;
public:
	QueueA();
	bool empty();
	void enqueue(QElement item);
	QElement dequeue();
	void display();
};