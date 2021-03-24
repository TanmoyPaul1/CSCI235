#pragma once

#include "Dnode.h"

// enqueue, dequeue, isEmpty, front
class queue
{
private:
    Dnode *head;
    Dnode *tail;

public:
    queue();
    void enqueue(int data);
    void dequeue();
    int front();
    std::string isEmpty();
    std::string toString();
    ~queue();
};