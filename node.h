#pragma once
class Node
{
	
private:
	Node * next; 
	double weight; 
public:
	
	Node(); 
	~Node(); 
	void setWeight(double);
	double getWeight(); 
	Node * getNext(void); 
	void setNext(Node *); 
};
