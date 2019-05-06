#include "Cola.h"
#include <iostream>


Cola::Cola()
{
	start = nullptr;
	end = nullptr;
	length = 0;
}


Cola::~Cola()
{
}

void Cola::queue(double value)
{
		Node * newNode = new Node();
		newNode->setWeight(value);
		if (start == nullptr) {
			start = newNode;
			end = newNode;
			newNode->setNext(nullptr);
			length++;
		}
		else {
			end->setNext(newNode);
			newNode->setNext(nullptr);
			end = newNode;
			length++;
		}
	
}

int Cola::dequeue(void)
{
	int value = -1;
	if (start == nullptr)
		return -1;
	else {
		value = start->getWeight();
		start = start->getNext();
		length--;
	}
	return value;
}

int Cola::Length(void)
{
	return length;
}

void Cola::display(void)
{
	if (start == nullptr)
	{
	}
	else {
		for (Node* seeker = start; seeker != nullptr; seeker = seeker->getNext()) {
			std::cout << seeker->getWeight() << ", ";
		}
	}
}

bool Cola::isEmpty(void)
{
	if (start == nullptr)
		return true;
	else
		return false;
}
