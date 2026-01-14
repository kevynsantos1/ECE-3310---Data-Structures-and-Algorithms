#include <iostream>
using namespace std;
#include "BSTree.h"

BSTree::BSTree()
{
	root = nullptr;
} //default constructor

BSTree::BSTree(Node* r) //overloaded constructor
{
	root = r;
}

bool BSTree::empty()
{
	if (root == nullptr)
		return true;
	else
		return false;
}

void BSTree::inorder(Node* r)
{
	if (r != nullptr)
	{
		inorder(r->left);
		cout << r->data << " ";
		inorder(r->right);
	}
}

void BSTree::preorder(Node* r)
{
	if (r != nullptr)
	{
		cout << r->data << " ";
		preorder(r->left);
		preorder(r->right);
	}
}

void BSTree::postorder(Node* r)
{
	if (r != nullptr)
	{
		postorder(r->left);
		postorder(r->right);
		cout << r->data << " ";
	}
}

bool BSTree::search(Node* root, int key)
{
	if (root == nullptr)
		return false;
	else
	{
		if (root->data == key)
			return true;
		else
		{
			if (root->data > key)
				search(root->left, key);
			else
				search(root->right, key);
		}
	}
}

void BSTree::insert(Node* r, Node* n)
{
	if (r->data == n->data)
		cout << "\n data " << n->data << " already exists \n";
	else
	{
		if (r->data > n->data)
		{
			if (r->left == '\0')
			{
				r->left = n; n->parent = r;
			}
			else
			{
				insert(r->left, n);
			}
		}
		else
		{
			if (r->right == '\0')
			{
				r->right = n; n->parent = r;
			}
			else { insert(r->right, n); }
		}
	}
}

void BSTree::remove(Node* n) 
{
	if ((n->left == nullptr) && (n->right == nullptr)) //node n is a leaf

	{
		if (n->parent != nullptr)   //make sure n is not the root
		{
			if (n->data > n->parent->data)
				n->parent->right = nullptr;
			else
				n->parent->left = nullptr;
		}
		else               // n is the root, no children
		{
			root = nullptr;
			cout << "\n The tree is empty now \n";
		}
	}

	if ((n->right != NULL) && (n->left == NULL))
	{
		if (n->data > n->parent->data)
			n->parent->right = n->right;
		else
			n->parent->left = n->right;
	}
	//one left child, no right child
	if ((n->right == NULL) && (n->left != NULL))
	{
		if (n->data > n->parent->data)
			n->parent->right = n->left;
		else
			n->parent->left = n->left;
	}

	Node* xsucc;
	if ((n->right != NULL) && (n->left != NULL))//two childern, find the successor, replace, and remove 
	{
		xsucc = n->right;
		while (xsucc->left != NULL)
		{
			xsucc = xsucc->left;
		}
		n->data = xsucc->data;
		if (xsucc == n->right)
			xsucc->parent->right = xsucc->right;
		else
			xsucc->parent->left = xsucc->right;
		if (xsucc->right != NULL)
		{
			xsucc->right->parent = xsucc->parent;
			xsucc->right = NULL;
		}
		xsucc->parent = NULL;
	}

}