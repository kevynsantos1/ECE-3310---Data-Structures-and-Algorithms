#include <iostream>
using namespace std;
#include "ListArray.h"

ListArray::ListArray()
{
	list_size = 0;
}
bool ListArray::empty()
{
	if (list_size == 0)
		return true;
	else
		return false;
}
void ListArray::insert(Element_Type item, int pos)
{
	if ((pos < 0) || (pos > list_size)) //array index starts at 0
	{
		cout << "error position specified\n";
	}
	else
	{
		list_size++;
		if (list_size == 1)  //the list is currently empty
			dataArray[0] = item;
		else
		{
			if (list_size == pos + 1) //the item is going to be inserted as the last item
				dataArray[pos] = item;
			else
			{
				for (int i = list_size - 1; i > pos; i--)
				{
					dataArray[i] = dataArray[i - 1]; //shifting to make room for the inserted item
				}
				dataArray[pos] = item; //insert the item
			}
		}
	}

}
void ListArray::erase(int pos)
{
	if ((pos < 0) || (pos >= list_size))
	{
		cout << "wrong position\n";
	}
	else
	{
		if (list_size > 0)
		{
			for (int i = pos; i < list_size; i++)
			{
				dataArray[i] = dataArray[i + 1];
			}
			list_size--;
		}
	}
}
void ListArray::display()
{
	for (int i = 0; i < list_size; i++)
		cout << dataArray[i] << ", ";
}

int ListArray::check_existance(Element_Type key, int index)
{
	
	if (index >= list_size)
		return 0;
	if (dataArray[index] == key)
		return index + 1;
	return check_existance(key, index + 1);
}

