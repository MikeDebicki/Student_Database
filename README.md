# Student_Database
A simple database created in C++ that creates and stores pointers to student objects. 

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

GETTING STARTED

  To get started make sure you have a terminal open to the file location and the files correctly unpacked.

  To run the program you type the following into the terminal
  1 make
  2 ./sas

  Now that your program is running you can follow the instructions presented by the terminal


RUNNING TESTS

  To run a test to see if the program can handle a larger load of information you can follow the following steps in the terminal
  NOTE* you must have the program compiled and working
  1 ./sas < in.txt

  You will have 19 students added to the database, atleast 15 of those students have 5 or more courses.


UNINSTALL

  To clean up the program and remove unwanted file simply enter the following step into the terminal
  1 make clean
