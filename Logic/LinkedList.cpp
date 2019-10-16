//
// Created by tomas on 8/9/19.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
    lenght = 0;

}

Node *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(Node *head) {
    LinkedList::head = head;
}

Node *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(Node *tail) {
    LinkedList::tail = tail;
}

int LinkedList::getLenght() {return lenght;}

void LinkedList::addNode(string link, string movieName){
    Node *tmp = new Node;
    lenght += 1;
    tmp->setLink(link); tmp->setMovieName(movieName); tmp->setNext(NULL); //tmp->setId(tail->getId() + 1);

    if(head == NULL){
        head = tmp; tail = tmp; } else {tail->setNext(tmp); tail = tail->getNext();}
}

Node LinkedList::getNode(int index) {
    int cont = 0;
    Node *tmp = this->getHead();
    while(cont < index){
        tmp = tmp->getNext();
        cont++;
    }
    return *tmp;
}
