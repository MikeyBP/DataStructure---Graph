/*
 * main.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
	Graph* g = new Graph();

	Vertex* c = new Vertex("Chicago");
	Vertex* b = new Vertex("Boston");
	Vertex* a = new Vertex("Las Vegas");
	Vertex* d = new Vertex("Detroit");

	a->addAdjacent(b);
	b->addAdjacent(c);
	c->addAdjacent(d);

	g->traverse(a);

	cout << "The trip from " << a->getName() << " to " << d->getName() << " requires " << d-> getDistance() << " flights" << endl;
	Vertex* i = d;
	while(i != NULL){
		cout << i -> getName() << endl;
		i = i -> getRoute();
	}

	return 0;
}
