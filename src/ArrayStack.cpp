//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#include "ArrayStack.h"
#include <iostream>
using namespace std;
ArrayStack::ArrayStack()
{
	// TODO Auto-generated constructor stuba
	topPtr = new Student[MAX];
	counter =0;//*topPtr = -777;
}
void ArrayStack:: push(Student x)
{

	if(counter == 0)
	{
		*topPtr = x;
		counter++;
	}
	else if(counter < 22 and counter != 0)
	{
		//int temp = 0;
		for(int i =counter-1; i >=0;i--)
		{
			topPtr[i+1] = topPtr[i];
		}
		*topPtr  = x;
	    counter++;
	}
	else
	cout << "ERROR: ArrayStack overflow." << endl;

}
void ArrayStack:: pop()
{
	if(counter == 0)
		cout << "ERROR: ArrayStack is empty." << endl;
	else
	{
		for(int i =0; i < counter;i++)
		{
					topPtr[i] = topPtr[i+1];
		}
				counter--;
	}
}
Student ArrayStack:: top()
{

		return *topPtr;
}
bool ArrayStack:: isEmpty()
{
	return counter ==0 ? true: false;
}
void ArrayStack:: printStack()
{
	for(int i  = 0; i <counter;i++)
		cout  << i<< topPtr[i].getId() << ", " << topPtr[i].getName() << endl;

	cout << endl;
}
ArrayStack::~ArrayStack()
{
	// TODO Auto-generated destructor stub
	//`for(int i =0; i < 22;i++)

		delete []topPtr;
}

