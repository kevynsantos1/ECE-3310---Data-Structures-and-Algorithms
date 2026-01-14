#pragma once
#define CAPACITY 128
typedef int StackElement1;

class Intstack
{
	StackElement1 stackArray[CAPACITY];
	int stack_top;
public:

	Intstack();
	bool empty();
	void push(StackElement1 item);
	StackElement1 pop();
	void display();
};