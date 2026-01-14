#pragma once
#define CAPACITY 128

typedef int StackElement;
class IntStack
{
	StackElement stackArray[CAPACITY];
	int stack_top_index; //index starts from 0
public:
	IntStack();
	bool empty();
	void push(StackElement item);
	StackElement pop(); //pop must return the top item
	void display();
	void display_b_to_t();
};