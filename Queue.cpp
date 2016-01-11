/*
 * Queue.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Queue.h"

Queue::Queue():_first(NULL),_last(NULL), _size(0)
{


}

Queue::~Queue()
{

}

bool Queue::isEmpty()
{
	return _size == 0;
}

Vertex *Queue::dequeue()
{
	if(_first == NULL)
	{
		return NULL;
	}

	_size --;

	return NULL; //wasn't sure what to return on a dequeue??
}



void Queue::enqueue(Vertex* vertex)
{
	if(_first == NULL) //the queue is empty
		{
			_first = vertex;
			_last = vertex;
		}else //The queue is not empty
		{
			_last->_nextAdjacent = vertex;
			_last = vertex;
		}
	_size++;
}

Vertex* Queue::getFirst() {
	return _first;
}

Vertex* Queue::getLast() {
	return _last;
}

int Queue::getSize() {
	return _size;
}
