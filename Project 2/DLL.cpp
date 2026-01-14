#include <iostream>
using namespace std;
#include "Node.h"
#include "DLL.h"

DLL::DLL() {
	first = nullptr;
	listsize = 0;
}
bool DLL::empty()
{
	if (first == nullptr)
		return true;
	else
		return false;
}

void DLL::insert(Node* newnode) {
	if (first == nullptr)
		first = newnode;
	else
	{
		first->prev = newnode;
		newnode->next = first;
		first = newnode;
	}

	listsize++;
}
void DLL::insert(Node* newnode, Node* pred)
{
	if (pred->next != nullptr)
	{
		pred->next->prev = newnode;
		newnode->next = pred->next;

	}
	pred->next = newnode;
	newnode->prev = pred;

	listsize++;
}

void DLL::insert_s(Node* newnode, Node* succ)
{
	/*if (succ != first)
	{
		newnode->next = succ;
		succ->prev = newnode;
		first = newnode;
	}

	newnode->next = succ;
	newnode->prev = succ->prev;
	succ->prev->next = newnode;
	succ->prev = newnode;*/

	if (!empty())
	{
		if (succ != first)
		{
			succ->prev->next = newnode;
			newnode->prev = succ->prev;
		}
		newnode->next = succ;
		succ->prev = newnode;
	}
	if (empty() || (succ == first))
	{
		first = newnode;
	}
	listsize++;
}


void DLL::erase(Node* n)
{
	if (n->prev == nullptr)
	{
		first = n->next;
	}
	else
	{
		n->prev->next = n->next;
	}
	if (n->next == nullptr)
	{
		n->prev->next = nullptr;
	}
	else
	{
		n->next->prev = n->prev;
	}
	n->prev = nullptr;
	n->next = nullptr;
	listsize--;
}
void DLL::display()
{
	Node* current;
	if (first != nullptr)
	{
		cout << "\n";
		current = first;
		while (current != nullptr)
		{
			cout << current->coeff << "x^" << current->exp;
			if (current->next != nullptr)
			{
				cout << " + ";
			}
			current = current->next;
		} 
		cout << "\n";
	}
	else
	{
		cout << "\n The list is empty\n";
	}
}

void DLL::display_r()
{
	Node* current;
	if (first != nullptr)
	{
		cout << "\n";

		current = first;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		while (current != nullptr)
		{
			cout << current->coeff << "x^" << current->exp;
			if (current->prev != nullptr)
			{
				cout << " + ";
			}
			current = current->prev;
		}
		cout << "\n";
	}
	else
	{
		cout << "\n The list is empty\n";
	}
}

DLL DLL::add(DLL list1, DLL list2)
{
	DLL result;
	Node* p1 = list1.first;
	Node* p2 = list2.first;

	while (p1 != nullptr && p2 != nullptr)
	{
		
			if (p1->exp == p2->exp)
			{
				result.insert(new Node(p1->coeff + p2->coeff, p1->exp));
				p1 = p1->next;
				p2 = p2->next;
			}
			else if (p1->exp > p2->exp)
			{
				result.insert(new Node(p2->coeff, p2->exp));
				p2 = p2->next;
			}
			else
			{
				result.insert(new Node(p1->coeff, p1->exp));
				p1 = p1->next;
			}
		
	}

	while (p1 != nullptr)
		{
		result.insert(new Node(p1->coeff, p1->exp));
		p1 = p1->next;
		}

	while (p2 != nullptr)
		{
		result.insert(new Node(p2->coeff, p2->exp));
		p2 = p2->next;
		}
	

	return result;
}