#pragma once
#include <iostream>
#include "Node.h"

class BSTree{
private:
    Node *root;

public:
    BSTree();
    void insert(int d);
    int search(int value);
    void deleteNode(int d);
    Node *deleteNode(Node *n, int d);

    int treesum();
    int treesumHelper(Node *n);
    int numNodes();
    int numNodesHelper(Node *n);
    int numLeaves();
    int numLeavesHelper(Node *n);
    int nodesum(int d);
    int height();
    int heightHelper(Node *n);

    std::string get_debug_string();
    std::string get_debug_stringHelper(Node *n);
    void setup();

};