//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
using namespace std;
class Student
{
private:
	int id;
	string name;
public:
	Student();
	Student(int, string);
	string getName();
	int getId();
	virtual ~Student();
};

#endif /* STUDENT_H_ */
