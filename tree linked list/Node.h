#pragma once
class Node
{
public:
	int data;
	Node* parent;
	Node* right;
	Node* left;
	Node(int data);
};