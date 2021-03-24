#include <iostream>
#include "Dnode.h"

Dnode::Dnode() : next(nullptr), prev(nullptr)
{
}

Dnode::Dnode(int data)
{
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
    this->pos = 0;
}

Dnode::Dnode(int data, Dnode *next, Dnode *prev)
{
    this->data = data;
    this->next = next;
    this->prev = prev;
    this->pos = 0;
}

Dnode::~Dnode()
{
    delete this->next, this->prev, this->data, this->pos;
}

void Dnode::setNext(Dnode *next)
{
    this->next = next;
}

void Dnode::setPrev(Dnode *prev)
{
    this->prev = prev;
}

void Dnode::setData(int data)
{
    this->data = data;
}

Dnode *Dnode::getNext()
{
    return this->next;
}

Dnode *Dnode::getPrev()
{
    return this->prev;
}

int Dnode::getData()
{
    return this->data;
}

void Dnode::setPos(int pos)
{
    this->pos = pos;
}

int Dnode::getPos()
{
    return this->pos;
}