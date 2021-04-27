#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Control.h"

void Control::launch()
{

  /*
    all of the functions below contain info and the references so that they can be passed correctly
  */
  int menu;
  int& refMenu = menu;

  int id;
  int& refID = id;

  int code,grade,term;
  string instructor;
  string& refInstructor = instructor;
  int& refCode = code;
  int& refGrade = grade;
  int& refTerm = term;

  int numStu = 0;

  while(1)
  {
    view.mainMenu(refMenu);            // Program starts with a main menu display

    if (refMenu == 0)               // If main menu output is 0 this runs
      break;

    else if (refMenu == 1)          // If main menu output is 1 this runs
    {
      view.stuID(refID);            // We go to view class to get the student id using a reference variable
      Student *newStudent = new Student(refID);       // Dynamic allocation of new student object

      while(1)
      {
        view.courseInfo(refCode, refGrade, refTerm, refInstructor);   // we pass references into this function to generate user input
        if(refCode == 0)                                              // whenever the user is done with entering classes we exit this loop to continue with another student
        {
          break;
        }
        Course *newCourse = new Course(code, grade, term, instructor);    // Dynamic allcoation of a new course using pointers
        newStudent->addCourse(newCourse);                     // As the user fills out information the student object is filled with classes
      }
      storage.addStu(newStudent);          // When all classes for current student are collected we exit interior loop and add the student to storage
      numStu += 1;
    }
  }

  if (numStu > 0)               // Check so we dont print an empty set
  {
    Storage& refStorage = storage;    // i reference the storage so as to not pass the whole object
    view.print(refStorage);
  }

}
