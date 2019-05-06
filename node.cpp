#include "node.h"

Node::Node()
{
	next = nullptr;
	weight = 0;
}

Node::~Node()
{
}

void Node::setWeight(double value)
{
	weight = value;
}

double Node::getWeight()
{
	return weight;
}

Node * Node::getNext(void)
{
	return next;
}


void Node::setNext(Node *ship)
{
	next = ship;
}
