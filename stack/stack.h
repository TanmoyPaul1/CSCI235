#pragma once

#include "Node.h"

// push, pop, top, and isEmpty
class stack{
    private:
        Node *head;

    public:
        stack();
        void push(int data);
        void pop();
        int top();
        std::string isEmpty();
        std::string toString();
        ~stack();
};