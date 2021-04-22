#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main()
{
    Node *n = new Node(20);
    std::cout << n->getData() << std::endl;
    Node *n2 = new Node(30);
    n->setLeft(n2);
    n2 = new Node (40);
    n->setRight(n2);

    std::cout << n->getLeft()->getData() << std::endl;
    std::cout << n->getRight()->getData() << std::endl;
    
    BSTree *t = new BSTree();
    t->setup();
    std::cout << t->get_debug_string() << std::endl;

    std::cout << t->search(2) << std::endl;
    std::cout << t->search(25) << std::endl;
    std::cout << t->search(3) << std::endl;
    std::cout << t->search(35) << std::endl;

    t->insert(10);
    t->insert(20);
    t->insert(30);
    t->insert(40);
    t->insert(60);
    t->insert(70);
    t->insert(80);
    t->insert(90);

    std::cout << t->get_debug_string() << std::endl;

    return 0;
}
