#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main()
{
    Node *n = new Node(20);
    // std::cout << n->getData() << std::endl;
    Node *n2 = new Node(30);
    n->setLeft(n2);
    n2 = new Node (40);
    n->setRight(n2);

    // std::cout << n->getLeft()->getData() << std::endl;
    // std::cout << n->getRight()->getData() << std::endl;
    
    BSTree *t = new BSTree();
    t->setup();
    // std::cout << t->get_debug_string() << std::endl;

    // std::cout << t->search(2) << std::endl;
    // std::cout << t->search(25) << std::endl;
    // std::cout << t->search(3) << std::endl;
    // std::cout << t->search(35) << std::endl;

    // t->insert(50);
    t->insert(10);
    t->insert(20);
    t->insert(21);
    t->insert(22);
    t->insert(23);
    t->insert(24);
    // t->insert(30);
    // t->insert(40);
    // t->insert(60);
    // t->insert(70);
    // t->insert(80);
    // t->insert(90);

    // t->insert(50);
    // t->insert(70);
    // t->insert(30);
    // t->insert(20);
    // t->insert(25);
    // t->insert(10);
    // t->insert(21);
    // t->insert(60);
    // t->insert(88);
    // t->insert(54);

    std::cout << t->get_debug_string() << std::endl;
    std::cout << t->numNodes() << std::endl;
    std::cout << t->numLeaves() << std::endl;

    t->deleteNode(25);
    t->deleteNode(75);
    t->deleteNode(50);
    t->deleteNode(15);

    std::cout << t->get_debug_string() << std::endl;
    std::cout << t->numNodes() << std::endl;
    std::cout << t->numLeaves() << std::endl;
    std::cout << t->treesum() << std::endl;

    std::cout << "\n" << t->nodesum(0) << std::endl;
    std::cout << t->nodesum(50) << std::endl;
    std::cout << t->nodesum(24) << std::endl;
    std::cout << t->nodesum(21) << std::endl;
    std::cout << t->nodesum(35) << std::endl;

    std::cout << "\n" << t->height() << std::endl;
    return 0;
}
