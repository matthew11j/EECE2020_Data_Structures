#include <iostream>
#include <string>
#include "queue_interface.h"
#include "node_s.h"

using namespace std;

template<class T>
class Queue : public QueueInterface<T> {
    private:
        Node<T> *front = nullptr;
        Node<T> *back = nullptr;
        Node<T> *newNodePtr;
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
            bool notFound = true;
            //create a node and push into queue
            if (isEmpty()) {
                Node<T> *newNodePtr = new Node<T>(item);
                newNodePtr -> setNext(front);
                front = newNodePtr;
                back = newNodePtr;
                newNodePtr = nullptr;
                itemCount++;
                return true;
            } else if (!isEmpty()){
                Node<T> *temp = front;
                while(notFound) {
                    if(temp->getNext() == nullptr || temp->getNext()->getItem() > item){
                        Node<T> *newNodePtr = new Node<T>(item);
                        if (item <= front->getItem()) {
                            newNodePtr -> setNext(front);
                            front = newNodePtr;
                        } else {
                            newNodePtr -> setNext(temp->getNext());
                            temp -> setNext(newNodePtr);
                            temp = newNodePtr;    
                        }
                        newNodePtr = nullptr;
                        return true;       
                    } else {
                        temp = temp->getNext();
                    }
                }
            } else {
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
                cout<<"The queue is empty!"<<endl;
            }
        }
        
        void Display() {
            Node<T> *temp = front;
            while(temp != nullptr){
                cout<<temp->getItem()<<" ";
                temp = temp->getNext();
            }
            cout<<endl;
        }
        
        bool isEmpty() const{
            if (front == nullptr){
                return true;
            }else{
                return false;
            }
        }
};