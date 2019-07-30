
#ifndef LINKEDLISTSTACK_H_
#define LINKEDLISTSTACK_H_

#include"Student.h"
#include "Node.h"
class LinkedListStack
{
private:

	Node* head;
	Node* tail;
	int counter;
public:
	//PUSH, POP, TOP
	LinkedListStack();
	void push(Student);
	void pop();
	Node top();
	bool isEmpty();
	void printStack();
	virtual ~LinkedListStack();
};

#endif /* LINKEDLISTSTACK_H_ */
