/*
This class accepts input from the user
*/

#ifndef VIEW_H
#define VIEW_H

#include "Storage.h"

class View
{
  public:
    void mainMenu(int&);    // displays main menu
    void stuID(int&);       // displays id and asks user to enter
    void courseInfo(int&, int&, int&, string&);   // asks for course info
    void print(Storage&);                       

  private:

};

#endif
