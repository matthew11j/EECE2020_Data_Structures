#ifndef _NODE_S
#define _NODE_S

#include <iostream>

using namespace std;

template<class T>
class Node{
  private:
    T item;
    Node<T> *next;
  public:
    Node(T temp):next(nullptr){
        item =temp;
    }
    T value;
   void setNext(Node<T> *n){
       next = n;
       n = nullptr;
    }
    Node* getNext(){
        return next;
    }
    T getItem(){
       return item;
    }
};

#endif