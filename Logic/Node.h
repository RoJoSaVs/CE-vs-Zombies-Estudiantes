//
// Created by tomas on 8/9/19.
//

#ifndef TECFLIX_NODE_H
#define TECFLIX_NODE_H

#include "fstream";
#include "iostream";

using namespace std;

struct Node {

private:
    int id;
    string link;
    string movieName;
    struct Node *next;

public:
    int getId() const;

    void setId(int id);

    const string &getLink() const;

    void setLink(const string &link);

    const string &getMovieName() const;

    void setMovieName(const string &movieName);

    Node *getNext() const;

    void setNext(Node *next);

};


#endif //TECFLIX_NODE_H
