//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#include "LinkedListStack.h"
#include "Node.h"
#include <iostream>
//#include "Student.h"
using namespace std;
LinkedListStack::LinkedListStack()
{
	// TODO Auto-generated constructor stub
	head = NULL;
	tail = NULL;
	counter = 0;
}
void LinkedListStack:: push(Student x)
{
	Node* newPtr = new Node;
	newPtr->setNextPtr(NULL);
	newPtr->setData(x);
	if(head == NULL)
	{
		head = newPtr;
		tail = newPtr;
		newPtr->setData(x);
		counter++;
	}else
	{
		newPtr->setNextPtr(head);
		newPtr->setData(x);
		head = newPtr;
	}
}
void LinkedListStack:: pop()
{
	Node* temp = new Node;
	temp = head;
	head = temp->getNextPtr();
	counter--;
	delete temp;
}
Node LinkedListStack:: top()
{
	return *head;
}
bool LinkedListStack:: isEmpty()
{
	if(counter == 0)
		return true;
	else
	return false;
}
void LinkedListStack:: printStack()
{
	Node* curr =  head;
//	Node* nex = new Node();
	if (head!=NULL)
	{
		//curr = head;
		//nex = NULL;
		while(curr->getNextPtr() !=NULL)
		{
			cout << curr->getData().getName() << ", " << curr->getData().getId() << endl;
			curr = curr->getNextPtr();
		}
		cout << curr->getData().getName() << ", " << curr->getData().getId() << endl;
	}

}
LinkedListStack::~LinkedListStack()
{
// TODO Auto-generated destructor stub
	if(head!=NULL)
	{
		Node* curr = head;
		while(curr->getNextPtr() != NULL)
		{
			head = curr->getNextPtr();
			delete curr;
			curr = head;
		}
		delete curr;
	}
}

