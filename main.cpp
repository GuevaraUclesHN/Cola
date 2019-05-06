#include "node.h"
#include "cola.h"
#include <iostream>
#include <conio.h>



int main() {
	
	Cola* a = new Cola();

	Node* b = new Node();
	b->setWeight(10.3);

	a->queue(b->getWeight());


	Node* c = new Node();

	c->setWeight(19.3);

	a->queue(c->getWeight());

	
	a->dequeue();

	a->display();

	_getch();
}
