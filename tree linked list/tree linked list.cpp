// tree linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "BSTree.h"
using namespace std;

int main()
{
	Node n1(10);
	Node n2(5);
	Node n3(40);
	Node n4(25);
	Node n5(70);
	Node n6(30);
	Node n7(65);
	Node n8(60);
	Node n9(68);
	Node n10(63);

	BSTree mytree(&n1);

	mytree.insert(&n1, &n2);
	mytree.insert(&n1, &n3);
	mytree.insert(&n1, &n4);
	mytree.insert(&n1, &n5);
	mytree.insert(&n1, &n6);
	mytree.insert(&n1, &n7);
	mytree.insert(&n1, &n8);
	mytree.insert(&n1, &n9);
	mytree.insert(&n1, &n10);
	cout << "\nInorder: ";
	mytree.inorder(&n1);
	cout << "\nPreorder: ";
	mytree.preorder(&n1);
	cout << "\nPostorder: ";
	mytree.postorder(&n1);
}


