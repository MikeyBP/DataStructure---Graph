/*
 * Queue.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "Vertex.h"

class Queue {
public:
	Queue();
	virtual ~Queue();
	bool isEmpty();
	void enqueue(Vertex* vertex);
	Vertex* dequeue();
	Vertex* getFirst();
	Vertex* getLast();
	int getSize();
private:
	Vertex* _first;
	Vertex* _last;
	int _size;

};

#endif /* QUEUE_H_ */

