#pragma once
#include "node.h"
class Cola
{
private:
	Node * start, *end; 
	int length; 
public:
	Cola(); 
	~Cola(); 
	void queue(double); 
	int dequeue(void); 
	int Length(void);
	void display(void); 
	bool isEmpty(void);
};
