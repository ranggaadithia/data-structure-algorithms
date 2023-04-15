#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int size)
{
  data = new int[size];
  this->size = size;
  topIndex = -1;
}

bool Stack::isEmpty()
{
  return topIndex == -1;
}

bool Stack::isFull()
{
  return topIndex == size - 1;
}

bool Stack::push(int value)
{
  if (isFull())
  {
    return false;
  }

  topIndex++;
  data[topIndex] = value;
  return true;
}

int Stack::pop()
{
  if (isEmpty())
  {
    return -1;
  }

  int value = data[topIndex];
  topIndex--;
  return value;
}

int Stack::peek()
{
  if (isEmpty())
  {
    return -1;
  }

  return data[topIndex];
}

void Stack::display()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  cout << "Stack Elements : ";
  for (int i = topIndex; i >= 0; i--)
  {
    cout << data[i] << " ";
  }
  cout << endl;
}