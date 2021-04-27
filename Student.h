/*
this class is a student
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "List.h"

class Student
{
  public:
    Student(int=0);
    ~Student();
    void addCourse(Course*); // adds a course to the student
    void print();

  private:
    int    id;
    List courseList;          // students courses
    int    numCourses;        // num of courses
};

#endif
