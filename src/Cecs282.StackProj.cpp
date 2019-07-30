//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#include <iostream>
using namespace std;
#include "ArrayStack.h"
#include "LinkedListStack.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World" << endl; // prints Hello World


	LinkedListStack linkedStack = LinkedListStack();
/*
	ArrayStack stack = ArrayStack();
	Student b(1322, "one"), l(2222, "two"),  e(0101, "three"),  s(2344, "four"), i(2322, "live");
	Student n(9393, "6ix"), g(7777, "7even");
	stack.push(b);
	stack.printStack();
	stack.push(l);
	stack.push(e);
	stack.push(s);
	stack.push(i);
	stack.push(n);
	stack.push(g);
	stack.printStack();
	 cout << "top: " << stack.top().getName() << endl;
	stack.pop();
	 cout << "top: " << stack.top().getName() << endl;
	  stack.pop();
	 	 cout << "top: " << stack.top().getName() << endl;
	 	 cout << "isEmpty(): " << stack.isEmpty() << endl;
	 	 stack.printStack();
	 	*/
	 	 cout <<"\t\t*******USING LINKED LIST STACK********" << endl;

	 	Student b(1322, "one"), l(2222, "two"),  e(0101, "three"),  s(2344, "four"), i(2322, "live");
	 		Student n(9393, "6ix"), g(7777, "7even");
	 		linkedStack.push(b);
	 		linkedStack.printStack();
	 		linkedStack.push(l);
	 		linkedStack.push(e);
	 		linkedStack.push(s);
	 		linkedStack.push(i);
	 		linkedStack.push(n);
	 		linkedStack.push(g);
	 		linkedStack.printStack();
	 		 cout << "top: " << linkedStack.top().getData().getName() << endl;
	 		linkedStack.pop();
	 		 cout << "top: " << linkedStack.top().getData().getName() << endl;
	 		linkedStack.pop();
	 		 	 cout << "top: " << linkedStack.top().getData().getName() << endl;
	 		 	 cout << "isEmpty(): " << linkedStack.isEmpty() << endl;
	 		 	linkedStack.printStack();


	return 0;
}
