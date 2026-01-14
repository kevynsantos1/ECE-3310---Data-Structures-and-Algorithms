#include <iostream>
using namespace std;
#include "Node.h"
Node::Node(int c, int e)
{
	coeff = c;
	exp = e;
	next = nullptr;
	prev = nullptr;
}