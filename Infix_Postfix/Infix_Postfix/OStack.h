#pragma once
#define CAPACITY 128
typedef char StackElement;

class OStack
{
	StackElement stackArray[CAPACITY];
	int stack_top;
public:

	OStack();
	bool empty();
	void push(StackElement item);
	StackElement pop();
	StackElement top();
	void display();
};