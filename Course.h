/*
This is the courses that each student will have

*/

#ifndef COURSE_H
#define COURSE_H

class Course
{
  public:
    Course(int = 0, int = 0, int = 0, string = "Hi");
    bool lessThan(Course*); // Function compares the course objects and returns true or false depemnding on code and term vaues
    void print();           // print

  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int term;   // the term of the student
    string instructor;      // the instructor of the student
    void getGradeStr(string&);
};

#endif
