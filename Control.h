/*
This class controls the programs

*/

#ifndef CONTROL_H
#define CONTROL_H

#include "Storage.h"
#include "View.h"
#include "Student.h"
#include "Course.h"

class Control
{
  public:
    void launch(); // function runs the entire program

  private:
    Storage storage;    // storage object to hold our info
    View view;          // view object to interact with the user
};

#endif
