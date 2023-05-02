#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
  LinkedList myList;

  myList.insertToHead(10);
  myList.insertToHead(20);
  myList.insertToTail(30);
  myList.insertAfter(2, 40);
  myList.insertAfter(3, 50);

  cout << "Linked All : " << endl;
  myList.printAll();

  myList.deleteFromHead();
  myList.printAll();

  myList.deleteFromTail();
  myList.printAll();

  myList.deleteByValue(40);
  myList.printAll();
}