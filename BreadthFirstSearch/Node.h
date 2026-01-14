#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	char name;
	Node* next;
	bool visited;
	int index;
	Node();
};