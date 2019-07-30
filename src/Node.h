#include <iostream>
#include <string>
using namespace std;
#ifndef NODE_H
#define NODE_H
#include "Student.h"
class Node
{
private:
	Student data;
	Node *nextPtr;
public:
	Node();
	Node(Student d);
	void setData(Student);
	Student getData() const;
	void setNextPtr(Node*);
	Node* getNextPtr() const;

};
#endif
