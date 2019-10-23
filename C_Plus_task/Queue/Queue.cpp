/*Copyright [year] <Copyright Owner>*/
#include "Queue.h"

template<class Type>
Queue<Type>::Queue() :queue_size(0), front(nullptr), rear(nullptr)
{}

template<class Type>
Queue<Type>::~Queue() {
    if (Queue<Type>::queue_size == 0) {
        return;
    }
    Queue<Type>::Node* begin = Queue<Type>::front;
    while (begin != Queue<Type>::rear) {
        Queue<Type>::front = Queue<Type>::front->prev;
        delete begin;
        begin = Queue<Type>::front;
    }
    delete Queue<Type>::front;
    delete Queue<Type>::rear;
}

template<class Type>
bool Queue<Type>::isempty()const {
    return Queue<Type>::front == nullptr;
}

template<class Type>
size_t Queue<Type>::Qsize()const {
    return Queue<Type>::queue_size;
}

template<class Type>
void Queue<Type>::Qpush(const Type &in) {
    if (Queue<Type>::front == nullptr) {
        Queue<Type>::front = new Queue<Type>::Node(in);
        Queue<Type>::rear = Queue<Type>::front;
        Queue<Type>::queue_size++;
    } else {
        Queue<Type>::rear->prev = new Queue<Type>::Node(in);
        Queue<Type>::rear->prev->next = Queue<Type>::rear;
        Queue<Type>::rear = Queue<Type>::rear->prev;
        Queue<Type>::rear->prev = nullptr;
        Queue<Type>::queue_size++;
    }
}

template<class Type>
Type Queue<Type>::Qpop() {
    if (Queue<Type>::queue_size == 0) {
        std::cerr << "This queue is empty" << std::endl;
    }
    if (Queue<Type>::queue_size == 1) {
        Queue<Type>::Node* tmp = Queue<Type>::front;
        Queue<Type>::front = nullptr;
        Type Qdata = tmp->data;
        Queue<Type>::queue_size--;
        delete tmp;
        return Qdata;
    }
    Queue<Type>::Node* tmp = Queue<Type>::front;
    Queue<Type>::front = Queue<Type>::front->prev;
    Queue<Type>::front->next = nullptr;
    Type Qdata = tmp->data;
    Queue<Type>::queue_size--;
    delete tmp;
    return Qdata;
}

template<class Type>
void Queue<Type>::clear() {
    if (Queue<Type>::queue_size == 0) {
        return;
    }
    Queue<Type>::Node* begin = Queue<Type>::front;
    while (begin != Queue<Type>::rear) {
        Queue<Type>::front = Queue<Type>::front->prev;
        delete begin;
        begin = Queue<Type>::front;
    }
    Queue<Type>::front = nullptr;
    Queue<Type>::rear = nullptr;
}
