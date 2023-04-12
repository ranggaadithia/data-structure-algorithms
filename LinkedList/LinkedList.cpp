#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input)
{
  Node *newNode = new Node();
  newNode->value = input;

  newNode->next = head;

  head = newNode;

  if (tail == NULL)
  {
    tail = head;
  }
}

void LinkedList::insertToTail(int input)
{
  Node *newNode = new Node();
  newNode->value = input;
  newNode->next = NULL;

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
}

void LinkedList::printAll()
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->value << ", ";
    tmp = tmp->next;
  }
  cout << endl;
}