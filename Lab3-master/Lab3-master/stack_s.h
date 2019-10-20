#include <iostream>
#include <string>
#include "stack_interface.h"
#include "node_s.h"
#include "exception.h"

using namespace std;

template<class T>
class Stack : public StackInterface<T> {
    private:
        Node<T> *top = nullptr;
        Node<T> *newNodePtr;
        myException UnderFlowException;
    public:
        Stack () {
            top = nullptr;
        }
        
        ~Stack(){
        //invokde pop until stack is empty
            while (!isEmpty()){
                pop();
            }
        }
        
        bool push(const T &item){
            //create a node and push into stack
            Node<T> *newNodePtr = new Node<T>(item);
            newNodePtr -> setNext(top);
            top = newNodePtr;
            newNodePtr = nullptr;
            return true;
        }
        
        bool pop(){
            //Returns the value on top of stack and removes from the stack
            if(!isEmpty()){
                Node<T> *temp = top;
                top = top->getNext();
                temp->setNext(nullptr);
                delete temp;
                temp = nullptr;
                return true;
            }
            return false;
        }
        T peek() const{
            if(!isEmpty()){
                return top->getItem();
            }else{
                try{
                    throw UnderFlowException;
                }catch (exception& e){
                    cout<< e.what() <<endl;
                }
            }
        }
        
        bool isEmpty() const{
            return top == nullptr;

        }
};