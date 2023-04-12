#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
  LinkedList list1;

  list1.insertToHead(40);
  list1.insertToHead(50);
  list1.insertToTail(30);
  list1.insertAfter(1, 60);

  cout << endl;

  list1.printAll();
}