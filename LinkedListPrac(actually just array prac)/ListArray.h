#pragma once
#define CAPACITY 1024
typedef int Element_Type;
class ListArray
{
	int list_size;
	Element_Type dataArray[CAPACITY];
public:
	ListArray(); //contructor
	bool empty();
	void insert(Element_Type item, int pos);
	void erase(int pos);
	void display(); 
	int check_existance(Element_Type key, int index);
};