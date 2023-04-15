class Stack
{

public:
  int *data;
  int size;
  int topIndex;
  Stack(int size);

  bool isEmpty();
  bool isFull();
  bool push(int value);
  int pop();
  int top();
  void printElements();
};
