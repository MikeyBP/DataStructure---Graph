/*
 * Vertex.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Vertex.h"


Vertex::Vertex(std::string name): _name(name), _firstAdjacent(NULL),_lastAdjacent(NULL),_nextAdjacent(NULL),_nextQueueVertex(NULL), _route(NULL), _visited(-1)
{
}

Vertex::~Vertex()
{

}

void Vertex::addAdjacent(Vertex* vertex) {
	if(_firstAdjacent == NULL){
		_route = vertex;
		_firstAdjacent = vertex;
		_lastAdjacent = vertex;
	}else{
		_lastAdjacent -> _nextAdjacent = vertex;
		_lastAdjacent = vertex;
	}
}
