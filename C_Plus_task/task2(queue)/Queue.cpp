#include "Queue.h"

template<class Type>
bool Queue<Type>::isempty()const {
    if (Queue<Type>::front == nullptr) {
        return true;
    }
}

template<class Type>
size_t Queue<Type>::Qsize()const {
    return Queue<Type>::queue_size;
}

template<class Type>
bool Queue<Type>::Qpush(const Type &in) {
    if (Queue<Type>::front == nullptr) {
        Queue<Type>::front = new Queue<Type>::Node(in);
        Queue<Type>::rear = Queue<Type>::front;
        Queue<Type>::rear->next = Queue<Type>::front;
        Queue<Type>::front->prev = Queue<Type>::rear;
        Queue<Type>::rear->prev = nullptr;
        Queue<Type>::front->next = nullptr;
        Queue<Type>::queue_size++;
    } else {
        Queue<Type>::rear->prev = new Queue<Type>::Node(in);
        Queue<Type>::rear->prev->next = Queue<Type>::rear->next;
        Queue<Type>::rear->next->prev = Queue<Type>::rear->prev;
        Queue<Type>::rear = Queue<Type>::rear->next;
        Queue<Type>::queue_size++;
    }
}

template<class Type>
bool Queue<Type>::Qpop(const Type &in) {
    if (Queue<Type>::queue_size == 0) {
        std::cout << "This queue is empty" << std::endl;
        return false;
    }
    Queue<Type>::Node* tmp = Queue<Type>::front;
    Queue<Type>::front = Queue<Type>::front->prev;
    Queue<Type>::front->next = nullptr;
    delete tmp;
}

template<class Type>
bool Queue<Type>::clear() {
    Queue<Type>::Node* begin = Queue<Type>::front;
    while (begin != Queue<Type>::rear) {
        Queue<Type>::front = Queue<Type>::front->prev;
        delete begin;
        begin = Queue<Type>::front;
    }
    Queue<Type>::front = nullptr;
    Queue<Type>::rear = nullptr;
}
