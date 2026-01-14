#include <iostream>
using namespace std;
#include "Node.h"
#include "Queue.h"
#include "graph.h"
#define size_of_V 5

int main()
{
	Graph my_graph;
	int link[size_of_V][size_of_V] = { {0,1,1,0,1},{1,0,1,0,0},{1,1,0,1,0},{0,0,1,0,1},{1,0,0,1,0} };
	my_graph.assign_edge(link);
	my_graph.BFS(&my_graph.v[2]);
	return 0;
}
