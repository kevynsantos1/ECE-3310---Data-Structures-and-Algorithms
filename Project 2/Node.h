#pragma once
class Node
{
public:
	int coeff;
	int exp;
	Node* next;
	Node* prev;
	Node(int c, int e);
};