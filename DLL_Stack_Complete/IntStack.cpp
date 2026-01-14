#include "IntStack.h"
#include <iostream>
using namespace std;

IntStack::IntStack()
{
	stack_size = 0;
	stack_top = nullptr;
}
bool IntStack::empty()
{
	if (stack_size == 0)
		return true;
	else
		return false;
}
void IntStack::push(Node* item)
{
	if (empty() == true)
	{
		stack_top = item;
	}
	else
	{
		stack_top->next = item;
		item->prev = stack_top;
		stack_top = item;
	}
	stack_size++;
}
Node* IntStack::pop()
{
	Node* temp = nullptr;
	if (empty() == true)
	{
		cout << "\n The stack is empty";
	}
	else
	{
		temp = stack_top;
		stack_top = stack_top->prev;
		if (stack_top) {
			stack_top->next = nullptr;
		}
		temp->prev = nullptr;
		stack_size--;
	}
	return temp;
}
void IntStack::display() 
{
	Node* current = stack_top;
	cout << endl;
	for (int i = 0; i < stack_size; i++)
	{
		cout << current->data << ", ";
		current = current->prev;


	}

}