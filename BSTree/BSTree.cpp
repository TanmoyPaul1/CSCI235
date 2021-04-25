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

void BSTree::deleteNode(int d) { root = deleteNode(root, d); }

Node *BSTree::deleteNode(Node *n, int d)
{
    if (n == nullptr)
    {
        return n;
    }

    if (n->getData() > d)
    {
        n->setLeft(deleteNode(n->getLeft(), d));
    }
    else if (n->getData() < d)
    {
        n->setRight(deleteNode(n->getRight(), d));
    }
    else
    {
        Node *walker = n;

        if (n->getLeft() == nullptr && n->getRight() == nullptr)
        {
            delete n;
            return nullptr;
        }
        else if (n->getRight() != nullptr)
        {
            walker = n->getRight();
            Node *d = walker;
            if (walker->getLeft() == nullptr)
            {
                n->setRight(walker->getRight());
            }

            while (walker->getLeft() != nullptr)
            {
                d = walker;
                walker = walker->getLeft();
            }
            d->setLeft(nullptr);
        }
        else
        {
            walker = n->getLeft();
            Node *d = walker;
            if (walker->getRight() == nullptr)
            {
                n->setLeft(walker->getLeft());
            }
            
            while (walker->getRight() != nullptr)
            {
                d = walker;
                walker = walker->getRight();
            }
            d->setRight(nullptr);
        }
        n->setData(walker->getData());
    }
    return n;
}



int BSTree::treesum() { return treesumHelper(root); }

int BSTree::treesumHelper(Node *n)
{
    if (n == nullptr)
    {
        return 0;
    }

    int left = 0, right = 0;
    if (n->getLeft() != nullptr)
    {
        left = treesumHelper(n->getLeft());
    }
    if (n->getRight() != nullptr)
    {
        right = treesumHelper(n->getRight());
    }

    return left + n->getData() + right;
}


int BSTree::numNodes() { return numNodesHelper(root); }

int BSTree::numNodesHelper(Node *n)
{
    if (n == nullptr)   return 0;

    return numNodesHelper(n->getLeft()) + numNodesHelper(n->getRight()) + 1;
}


int BSTree::numLeaves() { return numLeavesHelper(root); }

int BSTree::numLeavesHelper(Node *n)
{
    if (n == nullptr)   return 0;

    if (n->getLeft() == nullptr && n->getRight() == nullptr)    return 1;
    if (n->getRight() == nullptr)   return numLeavesHelper(n->getLeft());
    if (n->getLeft() == nullptr)    return numLeavesHelper(n->getRight());

    return numLeavesHelper(n->getLeft()) + numLeavesHelper(n->getRight());
}


int BSTree::nodesum(int d)
{
    Node *walker = root;
    while (walker->getData() != d)
    {
        if (walker->getData() > d)
        {
            walker = walker->getLeft();
        }
        else
        {
            walker = walker->getRight();
        }
        if (walker == nullptr)    return 0;
    }

    if (walker == nullptr)    return 0;
    return treesumHelper(walker);
}


int BSTree::height() { return heightHelper(root); }

int BSTree::heightHelper(Node *n)
{
    if (n == nullptr)   return 0;

    int left = heightHelper(n->getLeft());
    int right = heightHelper(n->getRight());
    
    return (left > right) ? left + 1 : right + 1;
}



std::string BSTree::get_debug_string() { return (root == nullptr) ?  "" : get_debug_stringHelper(root); }

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
