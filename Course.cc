#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

Course::Course(int c, int g, int t, string i)
{
  /* Constructor, added term and instructor */
  code  = c;
  grade = g;
  term = t;
  instructor = i;
}

void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << "-- Term " << term << ":  ";
  cout << "-- Instr. " << instructor << ":  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << endl;

  /* adjusted so that the print would also print out the new variables*/

}

void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

/*
  the function below accepts a course object pointer and compares the current object with that.
  It first checks if the codes are the same value. if so it compares the terms. If the codes are not the same
  the function then checks the codes and returns true or false depending on if the code was greater or less than
*/

bool Course::lessThan(Course* course)
{
  if(code == course->code)
  {
    if(term < course->term)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  if(code < course->code)
  {
    return true;
  }
  else
  {
    return false;
  }
}
