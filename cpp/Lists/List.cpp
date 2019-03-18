#include "List.hpp"

List::List()
{
    head = NULL;
    tail = NULL;

    this->count = 0;
}

void List::createNode(int value)
{
    node  *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        this->count++;
    }
}

void List::insertStart(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = head;
    head = temp;

    this->count++;
}
void List::insertEnd(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    tail->next = temp;
    tail = temp;

    this->count++;
}
void List::insertPosition(int pos, int value)
{
    node *temp = new node;
    node *cur = new node;

    cur = head;

    if(pos < 0 || pos > this->count + 1)
    {
        std::cout << "Posicao invalida!" << "\n";
    }
    else
    {
        if(pos == 0)
        {
            insertStart(value);
        }
        else
        {
            while(--pos > 0)
            {
                cur = cur->next;
            }
            temp->data = value;
            temp->next = cur->next;
            cur->next = temp;
        }
         this->count++;
    }
}

void List::display()
{
    node *temp = new node;
    temp = head;
    while(temp != NULL){
        std::cout << temp->data << "\t";
        temp = temp->next;
    }
    
}