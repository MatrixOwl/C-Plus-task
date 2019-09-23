#ifndef C_PLUS_TASK_QUEUE_H_

#include <iostream>

template<class Type>
class Queue{
 private:
    struct Node {
        explicit Node(const Type x);
        const Type data;
        struct Node * next;
        struct Node * prev;
    };

    Node * front;
    Node * rear;

    int queue_size;

 public:
    explicit Queue(
    int queue_size = 0,
    Node * front = nullptr,
    Node * rear = nullptr);
    ~Queue();
    bool isempty() const;
    size_t Qsize() const;
    bool Qpush(const Type &in);
    bool Qpop(const Type &in);
    bool clear();
};

#endif
