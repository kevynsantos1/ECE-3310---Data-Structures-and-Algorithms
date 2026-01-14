#pragma once
#include "Node.h"
class BSTree
{
public:
	Node* root;
	BSTree(); //default constructor
	BSTree(Node*); //overloaded costructor
	bool empty();
	void insert(Node* root, Node* n);
	void remove(Node* n);
	void inorder(Node* r);
	void preorder(Node* r);
	void postorder(Node* r);
	bool search(Node* r, int key);

};

