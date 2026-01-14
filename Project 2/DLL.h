#pragma once
#include "Node.h"
class DLL
{
public: Node* first;
	  int listsize;
	  DLL();
	  bool empty();
	  void insert(Node* newnode);
	  void insert(Node* newnode, Node* pred);
	  void insert_s(Node* newnode, Node* succ);
	  void erase(Node* node_to_be_deleted);
	  void display();
	  void display_r();
	  DLL add(DLL list1, DLL list2);
};