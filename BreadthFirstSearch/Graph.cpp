#include "Node.h"
#include "Queue.h"
#include "Graph.h"
#include <list>
#define size_of_V 5
Graph::Graph()
{
	for (int i = 0; i < size_of_V; i++)
	{
		v[i].name = (char)(i + 65);
		v[i].next = '\0';
		v[i].visited = false;
		v[i].index = i;
	}
}

void Graph::assign_edge(int link[size_of_V][size_of_V])
{
	for (int i = 0; i < size_of_V; i++)
	{
		for (int j = 0; j < size_of_V; j++)
		{
			adjacency_list[i][j] = link[i][j];
		}
	}
}
void Graph::BFS(Node * s)
{
	Queue pQ;
	Node* n, * a;
	pQ.enqueue(s);
	s->visited = true;
	cout << s->name << ", ";
	while (pQ.empty() == false)
	{
		a = pQ.dequeue();
		for (int i = 0; i < size_of_V; i++)
		{
			if (adjacency_list[a->index][i] != 0)
			{
				n = &v[i];
				if (n->visited == false)
				{
					cout << n->name << ", ";
					n->visited = true;
					pQ.enqueue(n);
				}
			}
		}
	}
}