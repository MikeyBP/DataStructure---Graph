/*
 * Vertex.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Vertex.h"


Vertex::Vertex(std::string name): _name(name), _firstAdjacent(NULL),_lastAdjacent(NULL),_nextAdjacent(NULL),_nextQueueVertex(NULL), _route(NULL), _distance(-1){
}

Vertex::~Vertex(){

}

void Vertex::addAdjacent(Vertex* vertex) {
	if(_firstAdjacent == NULL){
		_firstAdjacent = vertex;
		_lastAdjacent = vertex;
	}else{
		_lastAdjacent -> _nextAdjacent = vertex;
		_lastAdjacent = vertex;
	}
}

int Vertex::getDistance() {
	return _distance;
}

std::string Vertex::getName() {
	return _name;
}

Vertex* Vertex::getRoute() {
	return _route;
}

