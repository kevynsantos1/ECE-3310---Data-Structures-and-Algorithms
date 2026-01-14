#include <iostream>
using namespace std;
#include "Intstack.h"
#define CAPACITY 128
typedef int StackElement1;

Intstack::Intstack()
{
	stack_top = 0;
}
bool Intstack::empty()
{
	if (stack_top == 0)
		return 1;
	else
		return 0;
}

void Intstack::push(StackElement1 item)
{
	if (stack_top == CAPACITY)
		cout << "stack is full\n";
	else
	{
		stackArray[stack_top] = item;
		stack_top++;
	}
}

StackElement1 Intstack::pop()
{
	stack_top--;
	if (stack_top >= 0)
	{
		return stackArray[stack_top];
	}
	else
		return '\0';
}

void Intstack::display()
{
	for (int i = stack_top - 1; i >= 0; i--)
		cout << stackArray[i] << " ";
}