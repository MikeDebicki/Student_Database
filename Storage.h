/*
  This class stores student objects
*/

#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

class Storage
{
  public:
    Storage();
    ~Storage();
    void addStu(Student*);        // adds a student to storage
    void print();

  private:
    Student* students[MAX_NUM_COURSES];     // array of students
    int    numStudents;                       // number of students
};

#endif
