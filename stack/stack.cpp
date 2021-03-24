#include <iostream>
#include "stack.h"

stack::stack()
{
    head = nullptr;
}

void stack::push(int data)
{
    Node *new_node = new Node(data);
    new_node->setNext(head);
    head = new_node;
}

void stack::pop()
{
    if (head == nullptr)
    {
        std::cerr << "Error: stack is empty!" << std::endl;
        return;
    }
    
    Node *current = head;
    head = head->getNext();
    delete current;
}

int stack::top()
{
    if (head == nullptr)
    {
        std::cerr << "Error: stack is empty! ";
        return -1;
    }
    return head->getData();
}

std::string stack::isEmpty()
{
    return (head == nullptr) ? "true" : "false";   
}

std::string stack::toString()
{
    Node *walker = head;
    std::string s = "";
    while (walker != nullptr)
    {
        s = s + std::to_string(walker->getData()) + "-->";
        walker = walker->getNext();
    }
    s = s + "nullptr";
    return s;
}

stack::~stack()
{
    while (head != nullptr)
    {
        pop();
    }
}