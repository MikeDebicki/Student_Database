/*
WELCOME TO MY PROGRAM!!

By Michal Debicki  100979867
Base code was taken from my orignial assignment 1

List of source and header files
Source:                 Header:
  Cource.cc               Course.h
  main.cc
  Storage.cc              Storage.h
  Student.cc              Student.h
  Control.cc              Control.h
  View.cc                 View.h

Data:
  in.txt
  Makefile


INFORMATION

    Here i have created a program that accepts input from the user and builds a mini database for students and their course information.
    The data is stored using a dynamic allocation of nodes in a List. The purpose of this program is to use pointers to store data
    in an singly linked list

*/



#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

int main()
{
  Control control;  // create control object
  control.launch();   // launch program

  return 0;
}
