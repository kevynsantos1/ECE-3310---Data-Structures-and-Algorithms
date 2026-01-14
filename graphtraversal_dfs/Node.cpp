#include "Node.h"

Node::Node()
{
	name = '?';
	index = 0;
	visited = false;
}
Node::Node(char in_name)
{
	name = in_name;
	index = 0;
	visited = false;
}

