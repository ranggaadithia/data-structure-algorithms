#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
  LinkedList list1;

  list1.insertToHead(10);
  list1.insertToHead(20);
  list1.insertToHead(30);

  cout << list1.head->next->value;
  cout << endl;

  list1.printAll();
}