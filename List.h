/*
This class is a container class of lists for the courses
*/

#ifndef LIST_H
#define LIST_H

#include "Course.h"

class List
{
  class Node        // friend class of nodes
  {
    friend class List;
    private:
      Course* data;     // data of node
      Node* next;       // next node
  };

  public:
    List();
    ~List();
    void add(Course*);      // adds a course to list
    void print();

  private:
    Node* head;             // head node
    Node* tail;             // tail node
};

#endif
