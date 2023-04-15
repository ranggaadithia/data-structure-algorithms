#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
  Stack stack(5);

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);

  stack.printElements();

  stack.pop();
  stack.pop();

  cout << "Top Element : " << stack.top() << endl;
  stack.printElements();

  return 0;
}