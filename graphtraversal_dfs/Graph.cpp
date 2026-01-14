#include <iostream>;
using namespace std;
#include "Graph.h"

Graph::Graph()
{
	for (int i = 0; i < size; i++)
	{
		a[i].name = (char)(i + 65);//ASCII code for '0' is hex'30' which is decimal 48
		a[i].index = i;
		a[i].visited = false;
	}
}

void Graph::adjacency_setup(int link[size][size])
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			adjacency[i][j] = link[i][j];
}

void Graph::display_adj_matrix()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << adjacency[i][j] << "\t";
		cout << "\n";
	}
}

void Graph::dfs(Node * v)
{
	cout << v->name << ", ";
	v->visited = true;
	for (int i = 0; i < size; i++)
	{
		if (adjacency[v->index][i] != 0)
		{
			if (a[i].visited == false)
			{
				dfs(&a[i]);
			}
		}
	}
}
