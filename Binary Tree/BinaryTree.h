#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
  int id;
  string name;
  Node *left;
  Node *right;

  Node()
  {
    left = right = NULL;
  }
};

class BinaryTree
{
public:
  Node *root;

  void insert(int);
  void Delete(int);

  Node *insertRecursive(Node *, int);

  void preOrder(int);
  void inOrder();
  void inOrderRecursive(Node *);

  void postOrder(int);

  Node *serach(int);

  Node *findMin();
  Node *findMax();

  BinaryTree()
  {
    root = NULL;
  }
};