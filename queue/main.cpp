#include <iostream>
#include "queue.h"

int main()
{
    queue *q = new queue();
    std::cout << q->isEmpty() << std::endl; // True
    q->dequeue();                           // Error output
    std::cout << q->front() << std::endl;   // Error output
    
    std::cout << q->toString() << std::endl;

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);

    std::cout << q->toString() << std::endl;
    std::cout << q->isEmpty() << std::endl; // False

    std::cout << q->front() << std::endl; // 1
    q->dequeue();
    std::cout << q->front() << std::endl; // 2
    q->dequeue();
    q->enqueue(4);
    std::cout << q->toString() << std::endl;
}