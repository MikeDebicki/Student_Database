#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

Storage::Storage()
{
  numStudents = 0;
}

Storage::~Storage()
{
  for(int i = 0; i < numStudents; i += 1)  // Dynamic allocation of pointers requires a loop to delete each element
  {
    delete students[i];
  }
}

void Storage::addStu(Student* c)
{
  students[numStudents] = c;          // each student object pointer is accepted and added
  numStudents += 1;
}

void Storage::print()
{

  for(int i = 0; i < numStudents; i += 1)     // loop calls print on each student object in storage
  {
    students[i]->print();
    cout << i;
  }

}
