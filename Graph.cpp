/*
 * Graph.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Graph.h"
#include <iostream>

Graph::Graph(){

	_queue = new Queue();

}

Graph::~Graph(){


}

void Graph::traverse(Vertex *start){
	std::cout << start -> _name << std::endl;
	start -> _visited = 0;
		Vertex* i = start -> _firstAdjacent;
		while(i != NULL){
		     traverse(i);
		     i = i -> _nextAdjacent;
		}
}

Queue* Graph::getQueue() {
	return _queue;
}
