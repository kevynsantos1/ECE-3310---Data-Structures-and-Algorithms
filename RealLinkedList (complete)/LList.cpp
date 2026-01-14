#include <iostream>
using namespace std;
#include "LList.h" //You need to include the corresponding .h file
LList::LList() //constructor
{
	first = nullptr;
} //The first pointer pointing to the first element on the list

bool LList::empty() //use the "first" pointer to check whether the list is empty
{
	if (first == nullptr)
		return true;
	else
		return false;
}

void LList::insert(Node * newnode, Node * pred)
{ 
	if (pred != nullptr)
	{
		newnode->next = pred->next;
		pred->next = newnode;
	}
	else
	{
		newnode->next = first;
		first = newnode;
	}
}

/*void LList::insertfirst(Node * newnode)
{
	first = newnode;
}*/


void LList::erase(Node* pred)
{
	if (this->empty() == true)
		cout << "\nThe list is empty";
	else
	{
		Node* temp;
		if (pred == nullptr)
		{
			temp = first;
			first = first->next;
			temp->next = nullptr;
		}
		else
		{
			temp = pred->next;
			pred->next = pred->next->next;
			temp->next = nullptr;
		}
	}

}

void LList::display()
{
	Node* current = first;
	cout << "\n";
	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << "\n";
}


bool LList::check_existance(int key)
{
	Node* current = first;

	while (current != nullptr)
	{
		current = current->next;
		if (current->data == key)
			return true;
		else
			return false;
	}

	
}