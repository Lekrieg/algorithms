#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

struct node{
    int data;
    node *next;
};

class List{
    private:
        node *head, *tail;
    
    public:
        int count;

        List();
        void createNode(int value);
        void display();
        void insertStart(int value);
        void insertEnd(int value);
        void insertPosition(int pos, int value);
        int getSize();
};

#endif // LIST_HPP