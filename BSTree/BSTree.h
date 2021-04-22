#pragma once
#include <iostream>
#include "Node.h"

class BSTree{
private:
    Node *root;

public:
    BSTree();
    void insert (int d);
    int search(int value);
    std::string get_debug_string();
    std::string get_debug_stringHelper(Node *n);
    void setup();

};