/*
 * Node.cpp
 *
 *  Created on: Apr 28, 2018
 *      Author: baraj
 */
#include <iostream>
#include "Node.h"
#include <string>
using namespace std;
Node::Node()
{
	//data = NULL;
	nextPtr = NULL;
}
Node::Node(Student data0)
{
	data = data0;
	nextPtr = NULL;

}
void Node::setData(Student data0)
{
	data = data0;
}
Student Node::getData() const
{
	return data;
}
void Node::setNextPtr(Node * ptr)
{
	nextPtr = ptr;
}
Node* Node::getNextPtr() const
{
	return nextPtr;
}


