#include <iostream>
#include "queue.h"

queue::queue()
{
    head = new Dnode();
    tail = new Dnode();
    head->setNext(tail);
    tail->setPrev(head);
}

void queue::enqueue(int data)
{
    Dnode *new_node = new Dnode(data);
    new_node->setNext(head->getNext());
    new_node->setPrev(head);
    head->getNext()->setPrev(new_node);
    head->setNext(new_node);
}

void queue::dequeue()
{
    if(tail->getPrev() == head)
    {
        std::cerr << "Error: queue is empty!" << std::endl;
        return;
    }

    // Dnode *current = tail->getPrev();
    tail->getPrev()->getPrev()->setNext(tail);
    tail->setPrev(tail->getPrev()->getPrev());
    // delete current;
}

int queue::front()
{
    if (tail->getPrev() == head)
    {
        std::cerr << "Error: queue is empty! ";
        return -1;
    }
    return tail->getPrev()->getData();
}

std::string queue::isEmpty()
{
    return (head->getNext() == tail) ? "true" : "false";
}

std::string queue::toString()
{
    Dnode *walker = head;
    std::string s = "";
    while (walker->getNext() != tail)
    {
        walker = walker->getNext();
        s = s + std::to_string(walker->getData()) + "<-->";
    }
    s = s + "nullptr";
    return s;
}

queue::~queue()
{
    while (head->getNext() != tail)
    {
        dequeue();
    }
}