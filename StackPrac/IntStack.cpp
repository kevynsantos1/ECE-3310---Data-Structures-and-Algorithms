#include <iostream>
using namespace std;
#include "IntStack.h"

IntStack::IntStack()
{
	stack_top_index = 0;
}

bool IntStack::empty()
{
	if (stack_top_index == 0)
		return true;
	else
		return false;
}

void IntStack::push(StackElement item)
{
	if (stack_top_index == CAPACITY)
		cout << "\n stack is full\n";
	else
	{
		stackArray[stack_top_index] = item;
		stack_top_index++;
	}
}

StackElement IntStack::pop()
{
	StackElement item = 0;
	stack_top_index--;
	if (stack_top_index >= 0)
		item = stackArray[stack_top_index];
	else
		cout << "\n stack is empty\n";
	return item;
}

void IntStack::display()
{
	int current_index = stack_top_index - 1;
	for (int i = current_index; i >= 0; i--)
	{
		cout << stackArray[i] << ", ";
	}
}

void IntStack::display_b_to_t()
{
	int current_index = 0;
	for (int i = current_index; i < stack_top_index; i++)
	{
		cout << stackArray[i] << ", ";
	}


}

