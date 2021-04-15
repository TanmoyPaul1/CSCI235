#include "BSTree.h"

BSTree::BSTree()
{
    root = nullptr;
}

void BSTree::insert (int d)
{}

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
    Node *n = new Node(0);
    root = n;
    
    n = new Node(1);
    root->setLeft(n);
    Node *n2 = new Node(11);
    n->setLeft(n2);
    n2 = new Node(12);
    n->setRight(n2);

    n = new Node(2);
    root->setRight(n);
    n2 = new Node(21);
    n->setLeft(n2);
    n2 = new Node(22);
    n->setRight(n2);

}
