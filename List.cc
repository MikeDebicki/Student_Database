#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "List.h"

List::List() : head(0)
{

}

List::~List()               // destroctor needs to see every node
{
  Node* tempNode = head;
  Node* nextNode;

  while(tempNode != NULL){
    nextNode = tempNode->next;
    delete tempNode->data;
    delete tempNode;
    tempNode = nextNode;
  }
}

/*
 function below goes through lengthy checklist to make sure it adds a node into the correct position. The function below also creates
 new nodes.
*/

void List::add(Course* course)
{
  Node *newNode;
  newNode = new Node;
  newNode->data = course;
  newNode->next = 0;

  Node *prevNode;
  Node *tempNode;
  tempNode = head;
  prevNode = head;

  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }

  while(1){
    if(newNode->data->lessThan(tempNode->data)){
      newNode->next = tempNode;
      if(head == tempNode){
        head = newNode;
        return;
      }
      else{
        prevNode->next = newNode;
        return;
      }
    }
    if(tempNode->next != NULL){
      if(tempNode == prevNode){
        tempNode = tempNode->next;
      }
      else{
        tempNode = tempNode->next;
        prevNode = prevNode->next;
      }
    }
    else{
      tempNode->next = newNode;
      tail = newNode;
      return;
    }
  }
}

void List::print()
{
  Node* tempNode = head;

  while(tempNode != NULL){
    tempNode->data->print();
    tempNode = tempNode->next;
  }
}
