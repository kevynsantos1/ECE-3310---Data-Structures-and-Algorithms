#pragma once
#include "Node.h"
#define size 5

class Graph
{
public:
	Node a[size];
	int adjacency[size][size];
	Graph();

	void adjacency_setup(int link[size][size]);

	void display_adj_matrix();

	void dfs(Node* v);

};
