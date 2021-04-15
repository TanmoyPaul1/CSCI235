#include <iostream>
#include "Node.h"

Node::Node()
{
    data = 0;
    left = nullptr;
    right = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

Node::Node(int data, Node *l, Node *r)
{
    this->data = data;
    this->left = l;
    this->right = r;
}

int Node::getData()
{
    return this->data;
}

Node *Node::getLeft()
{
    return this->left;
}

Node *Node::getRight()
{
    return this->right;
}

void Node::setData(int data)
{
    this->data = data;
}

void Node::setLeft(Node *l)
{
    this->left = l;
}

void Node::setRight(Node *r)
{
    this->right = r;
}