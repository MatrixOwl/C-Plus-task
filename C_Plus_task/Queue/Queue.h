/* Copyright [year] <Copyright Owner>*/
#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>

template<class Type>
class Queue{
 private:
    struct Node {
        explicit Node(const Type& x, Node* n = nullptr, Node* p = nullptr) :
        data(x), next(n), prev(p) {}
        Type data;
        struct Node * next;
        struct Node * prev;
    };

    Node * front;
    Node * rear;

    int queue_size;

 public:
    Queue();
    ~Queue();
    bool isempty() const;
    size_t Qsize() const;
    void Qpush(const Type &in);
    Type Qpop();
    void clear();
};

#endif  // QUEUE_H_
