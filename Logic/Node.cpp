//
// Created by tomas on 8/9/19.
//

#include "Node.h"

int Node::getId() const {
    return id;
}

void Node::setId(int id) {
    Node::id = id;
}

const string &Node::getLink() const {
    return link;
}

void Node::setLink(const string &link) {
    Node::link = link;
}

const string &Node::getMovieName() const {
    return movieName;
}

void Node::setMovieName(const string &movieName) {
    Node::movieName = movieName;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
