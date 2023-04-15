class Queue
{
public:
  int *data;
  int frontIndex;
  int rearIndex;
  int size;

  Queue(int value);
  bool isEmpty();
  bool isFull();
  bool enqueue(int value);
  int dequeue();
  int front();
  int rear();
  void printElements();
};