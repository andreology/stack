//Andre Barajas
//Cecs 282
//Spring 2018
//This program creates a stack array and linked lists
#include "Student.h"

Student::Student()
{
	// TODO Auto-generated constructor stub
	name = "JonDoe";
	id = 1012;
}
Student::Student(int x, string y)
{
	// TODO Auto-generated constructor stub
	name = y;
	id = x;
}
string Student:: getName()
{
	return name;
}
int Student:: getId()
{
	return id;
}
Student::~Student()
{
	// TODO Auto-generated destructor stub
}

