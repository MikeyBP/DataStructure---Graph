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

	Vertex* chicago = new Vertex("Chicago");
	Vertex* newyork = new Vertex("New York");
	Vertex* boston = new Vertex("Boston");
	Vertex* portland = new Vertex("Portland");
	Vertex* lasvegas = new Vertex("Las Vegas");
	Vertex* sanfrancisco = new Vertex("San Francisco");

	g->getQueue()->enqueue(portland);
	g->getQueue()->enqueue(boston);
	g->getQueue()->enqueue(lasvegas);
	g->getQueue()->enqueue(newyork);
	g->getQueue()->enqueue(sanfrancisco);
	g->getQueue()->enqueue(chicago);

	g->traverse(portland);

	return 0;
}
