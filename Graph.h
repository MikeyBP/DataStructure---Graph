/*
 * Graph.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef GRAPH_H_
#define GRAPH_H_
#include "Queue.h"
class Graph
{
public:
	Graph();
	virtual ~Graph();
	void traverse(Vertex* start);
	Queue* getQueue();
private:
	Queue* _queue;

};

#endif /* GRAPH_H_ */
