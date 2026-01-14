/*#include <iostream>;
using namespace std;
#include "Node.h"
#include "Graph.h"

#define size 5

int main()
{
	Graph my_graph;
	//assign adjacency matrix, undirected graph
	int link[size][size];
	for (int i = 0; i < size; i++)
		link[i][i] = 0;

	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
		{
			link[i][j] = rand() % 2; //randomly assign, 0 means no edge, 1 means yse
			link[j][i] = link[i][j];//graph, symmetric
		}
	my_graph.adjacency_setup(link);
	my_graph.display_adj_matrix();
	my_graph.dfs(&my_graph.a[0]);
	return 0;
}*/

#include <iostream>
using namespace std;
#include "Graph.h"
int main()
{
	Graph my_graph;
	//assign adjacency matrix, undirected graph
	int link[size][size];
	for (int i = 0; i < size; i++)
		link[i][i] = 0;
	/*
	for (int i = 0; i < size; i++)
	for (int j = i + 1; j < size; j++)
	{
	link[i][j] = rand() % 2; //randomly assign, 0 means no edge, 1 means yse
	link[j][i] = link[i][j];//graph, symmetric
	}*/
	link[0][1] = 1;
	link[0][2] = 0;
	link[0][3] = 1;
	link[0][4] = 1;
	link[1][0] = 1;
	link[1][2] = 1;
	link[1][3] = 1;
	link[1][4] = 0;
	link[2][0] = 0;
	link[2][1] = 1;
	link[2][3] = 1;
	link[2][4] = 1;
	link[3][0] = 1;
	link[3][1] = 1;
	link[3][2] = 1;
	link[3][4] = 0;
	link[4][0] = 1;
	link[4][1] = 0;
	link[4][2] = 1;
	link[4][3] = 0;
	my_graph.adjacency_setup(link);
	my_graph.display_adj_matrix();
	my_graph.dfs(&my_graph.a[1]);
	return 0;
}