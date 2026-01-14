#pragma once
#include "Queue.h"
#include "Node.h"
#include <list>
#include <iostream>
using namespace std;
#define size_of_V 5
class Graph
{
public:
	Node v[size_of_V];
	int adjacency_list[size_of_V][size_of_V];
	Graph();
	void assign_edge(int link[size_of_V][size_of_V]);
	void BFS(Node* s);
};