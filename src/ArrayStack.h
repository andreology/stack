//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_
#include "Student.h"
#define MAX 22
class ArrayStack
{
private:
	Student*  topPtr;
	int counter;
public:
	ArrayStack();
	void push(Student);
	void pop();
	Student top();
	bool isEmpty();
	void printStack();
	virtual ~ArrayStack();
};

#endif /* ARRAYSTACK_H_ */
