#include <iostream>
#include <string>
#include "queue_interface.h"
#include "node_s.h"
#include "exception.h"

using namespace std;

template<class T>
class Queue : public QueueInterface<T> {
    private:
        Node<T> *front = nullptr;
        Node<T> *back = nullptr;
        Node<T> *newNodePtr;
        myException UnderFlowException;
        int itemCount;
    public:
        Queue () {
            front = nullptr;
            back = nullptr;
            itemCount = 0;
        }
        
        ~Queue(){
        //invokde dequeue until stack is empty
            while (!isEmpty()){
                dequeue();
            }
        }
        
        bool enqueue(const T &item){
            //create a node and push into queue
            if (isEmpty()){
                Node<T> *newNodePtr = new Node<T>(item);
                newNodePtr -> setNext(front);
                front = newNodePtr;
                back = newNodePtr;
                newNodePtr = nullptr;
                itemCount++;
                return true;
            }else if (!isEmpty()){
                Node<T> *newNodePtr = new Node<T>(item);
                back -> setNext(newNodePtr);
                newNodePtr -> setNext(nullptr);
                back = newNodePtr;
                newNodePtr = nullptr;
                itemCount++;
                return true;
            } else{
                return false;
            }
        }
        
        bool dequeue(){
            //Returns the value on top of stack and removes from the stack
            if(!isEmpty()){
                Node<T> *temp = front;
                front = front->getNext();
                temp->setNext(nullptr);
                delete temp;
                temp = nullptr;
                itemCount--;
                return true;
            }
            return false;
        }
        T peekFront() const{
            //Returns the value in the front of the queue
            if(!isEmpty()){
                return front->getItem();
            }else{
                try{
                    throw UnderFlowException;
                }catch (exception& e){
                    cout<< e.what() <<endl;
                }
            }
        }
        
        bool isEmpty() const{
            if (front == nullptr && itemCount == 0){
                return true;
            }else{
                return false;
            }
        }
};