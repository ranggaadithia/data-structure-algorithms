#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  Stack s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  s.printElements();

  cout << "Top Element : " << s.top() << endl;

  cout << "Popped Element : " << s.pop() << endl;

  s.printElements();

  return 0;
}
