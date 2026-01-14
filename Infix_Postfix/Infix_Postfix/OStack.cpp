#include <iostream>
using namespace std;
#include "OStack.h"
#define CAPACITY 128
typedef char StackElement;

OStack::OStack()
{
	stack_top = 0;
}
bool OStack::empty()
{
	if (stack_top == 0)
		return 1;
	else
		return 0;
}

void OStack::push(StackElement item)
{
	if (stack_top == CAPACITY)
		cout << "stack is full\n";
	else
	{
		stackArray[stack_top] = item;
		stack_top++;
	}
}

StackElement OStack::pop()
{
	stack_top--;
	if (stack_top >= 0)
	{
		return stackArray[stack_top];
	}
	else
		return '\0';
}
StackElement OStack::top()
{
	if (stack_top !=0)
	{
		return stackArray[stack_top-1];
	}
	else
		return '\0';
}
void OStack::display()
{
	for (int i = stack_top - 1; i >= 0; i--)
		cout << stackArray[i] << " ";
}