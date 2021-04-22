#include "BSTree.h"

BSTree::BSTree()
{
    root = nullptr;
}

void BSTree::insert(int value)
{
    Node *newNode = new Node(value);

    if (root == nullptr)
    {
        root = newNode;
        return;
    }

    Node *t = root;
    Node *t2;
    int check = 0;

    while (t != nullptr)
    {
        t2 = t;
        if (t->getData() > value)
        {
            t = t->getLeft();
            check = 1;
        }
        else
        {
            t = t->getRight();
            check = 2;
        }
    }
    if (check == 1)
        t2->setLeft(newNode);

    else
        t2->setRight(newNode);
}

int BSTree::search(int value)
{
    Node *t = root;

    while (t != nullptr)
    {
        if(t->getData() == value)
        {
            return value;
        }
        else if (t->getData() > value)      
        {
            t = t->getLeft();
        }
        else
        {
            t = t->getRight();
        } 
    }
    // throw -1;
    return -1;
}

std::string BSTree::get_debug_string()
{
    return (root == nullptr) ?  "" : get_debug_stringHelper(root);
}

std::string BSTree::get_debug_stringHelper(Node *n)
{
    if (n == nullptr)
    {
        return "";
    }
    
    std::string left = "", right = "";
    if (n->getLeft() != nullptr)
    {
        left = get_debug_stringHelper(n->getLeft());
    }
    if (n->getRight() != nullptr)
    {
        right = get_debug_stringHelper(n->getRight());
    }

    return left + "<--" + std::to_string(n->getData()) + "-->" + right;
}

void BSTree::setup()
{
    Node *n = new Node(50);
    root = n;
    
    n = new Node(25);
    root->setLeft(n);
    Node *n2 = new Node(15);
    n->setLeft(n2);
    n2 = new Node(35);
    n->setRight(n2);

    n = new Node(75);
    root->setRight(n);
    n2 = new Node(65);
    n->setLeft(n2);
    n2 = new Node(85);
    n->setRight(n2);
}
