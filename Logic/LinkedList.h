//
// Created by tomas on 8/9/19.
//

#ifndef TECFLIX_LINKEDLIST_H
#define TECFLIX_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node *head, *tail;
    int lenght;

public:
    LinkedList();
    void addNode(string link, string movieName);

    Node *getHead() const;

    void setHead(Node *head);

    Node *getTail() const;

    void setTail(Node *tail);

    int getLenght();

    Node getNode(int index);

};


#endif //TECFLIX_LINKEDLIST_H
