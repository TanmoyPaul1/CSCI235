#pragma once
#include <string>

class Dnode{
private:
    int data;
    Dnode *next, *prev;
    int pos;
    
public:
    Dnode();
    Dnode(int data);
    Dnode(int data, Dnode *next, Dnode *prev);
    ~Dnode();

    void setNext(Dnode *next);
    void setPrev(Dnode *prev);
    void setData(int data);

    Dnode *getNext();
    Dnode *getPrev();
    int getData();

    void setPos(int pos);
    int getPos();
};