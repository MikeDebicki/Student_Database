#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;
}

Student::~Student()
{
  
}


void Student::addCourse(Course* c)
{
  courseList.add(c);        // each class object pointer is accepted and added to the specific student only

}

void Student::print()
{

  cout<< endl << "Id: " << id << endl;   // id is printed out once

  courseList.print();

}
