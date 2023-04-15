#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
  Stack s(5);

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  s.display();

  s.pop();
  s.pop();

  cout << "Top Element : " << s.peek() << endl;
  s.display();

  return 0;
}