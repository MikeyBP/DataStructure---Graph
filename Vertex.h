/*
 * Vertex.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef VERTEX_H_
#define VERTEX_H_
#include <string>
class Vertex {
public:
	Vertex(std::string name);
	void addAdjacent(Vertex* vertex);
	virtual ~Vertex();
private:
	std::string _name;
	Vertex* _firstAdjacent;
	Vertex* _lastAdjacent;
	Vertex* _nextAdjacent;
	Vertex* _nextQueueVertex;
	Vertex* _route;
	int _visited;
	friend class Queue;
	friend class Graph;
};

#endif /* VERTEX_H_ */

