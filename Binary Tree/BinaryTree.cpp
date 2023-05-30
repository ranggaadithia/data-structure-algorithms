#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insert(int insertID)
{
  root = insertRecursive(root, insertID);
}

Node *BinaryTree::insertRecursive(Node *currentRoot, int insertID)
{
  if (currentRoot == NULL)
  {
    currentRoot = new Node();
    currentRoot->id = insertID;
    return currentRoot;
  }

  if (insertID < currentRoot->id)
  {
    currentRoot->left = insertRecursive(currentRoot->left, insertID);
  }

  else if (insertID > currentRoot->id)
  {
    currentRoot->right = insertRecursive(currentRoot->right, insertID);
  }

  return currentRoot;
}

void BinaryTree::inOrder()
{
  inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentNode)
{
  if (currentNode != NULL)
  {
    inOrderRecursive(currentNode->left);
    cout << currentNode->id << ", ";
    inOrderRecursive(currentNode->right);
  }
}