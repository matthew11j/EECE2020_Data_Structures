#include <iostream>

using namespace std;

template <class T>
class BinaryNode{
    private:
        T item;
        BinaryNode<T> *left = nullptr;
        BinaryNode<T> *right = nullptr;
    public:
        BinaryNode(T value){
            item = value;
        }
        
        void setItem(const T &temp){
            item = temp;
        }
        
        T getItem() const{
            return item;
        }
        
        void setLeft(BinaryNode<T> *n){
            left = n;
        }
        
        void setRight(BinaryNode<T> *n){
            right = n;
        }
        
        BinaryNode* getLeft() const{
             return left;
        }
        
        BinaryNode* getRight() const{
            return right;
        }
        
        bool operator == (BinaryNode<T> &node1){
            return (item == node1.getItem());
        }
        
        bool operator > (BinaryNode<T> &node1){
            return (item > node1.getItem());
        }
        
        bool operator < (BinaryNode<T> &node1){
            return (item < node1.getItem());
        }
        
        ~BinaryNode(){
        delete left;
        delete right;
        left = nullptr;
        right = nullptr;
        }
};






