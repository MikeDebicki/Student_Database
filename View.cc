#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "View.h"

void View::mainMenu(int& refMenu)
{
  int numOptions = 1;
  refMenu  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (refMenu < 0 || refMenu > numOptions) {
    cout << "Enter your selection: ";
    cin  >> refMenu;
  }

  return;
}

void View::stuID(int& refID)
{
  cout << "student id:   ";
  cin  >> refID;                    // Start of info gathering

  return;
}

void View::courseInfo(int& refCode, int& refGrade, int& refTerm, string& refInstructor)
{
  cout << "course code <0 to end>:  ";
  cin  >> refCode;
  if (refCode == 0)
  {
    return;
  }
  cout << "grade:                   ";
  cin  >> refGrade;
  cout << "term:                   ";
  cin  >> refTerm;                                             // collect info about term from user
  cout << "Instructor:                   ";
  cin  >> refInstructor;                                       // collect info about instructor from user
  return;
}

void View::print(Storage& storage)
{
  storage.print();
}
