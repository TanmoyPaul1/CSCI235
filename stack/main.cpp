#include <iostream>
#include "stack.h"

int main()
{
    stack *s = new stack();
    std::cout << s->isEmpty() << std::endl; // True
    s->pop();                               // Error output
    std::cout << s->top() << std::endl;     // Error output
    
    std::cout << s->toString() << std::endl;

    s->push(1);
    s->push(2);
    s->push(3);

    std::cout << s->toString() << std::endl;
    std::cout << s->isEmpty() << std::endl; // False

    std::cout << s->top() << std::endl; // 3
    s->push(4);
    std::cout << s->top() << std::endl; // 4

    s->pop();
    s->pop();

    std::cout << s->toString() << std::endl;
}