#include <iostream>
#include <string>
#include "TreeInterface.h"

using namespace std;
template <class T>
class BinarySearchTree : public BinaryTreeInterface<T>{
    private:
    BinaryNode<T> *root = nullptr;
    public:
    //Constructor
    BinarySearchTree(){
        root = nullptr;
    }
         /**
         * Checks if the tree is empty.
         * @return True/False
         */
        bool isEmpty(BinaryNode<T> *root){
           return (root == nullptr);
        }
        
        /**
         * Returns the number of nodes in the tree.
         * @return number of nodes.
         */
        int size(BinaryNode<T> *root){
            int count = 0;
            if (isEmpty(root)) {
                return 0;
            } else {
                sizeFinder(root, count);
            }
            return count;
        }

        void sizeFinder(BinaryNode<T> *root, int& count){
            if(root == nullptr) return;
            count++;
            sizeFinder(root->getLeft(), count);
            sizeFinder(root->getRight(), count);
        }
        
        /**
         * Retrun the height of the tree
         */
         int getHeight(BinaryNode<T> *root){
             if (root == nullptr){
                 return 0;
             }
             
             int leftTree = getHeight(root -> getLeft());
             int rightTree = getHeight(root -> getRight());
             
             if (leftTree > rightTree){
                 return leftTree + 1;
             }else{
                 return rightTree + 1;
             }
         }
         
        /**
         * Inserts an item into the tree.
         * @return True/False
         */ 
        BinaryNode<T>* insert(BinaryNode<T> *root, const T& item){
            BinaryNode<T> *temp = new BinaryNode<T>(item);
            if(root == nullptr) {
                root = temp;
            } else {
                if(*temp < *root){
                    root->setLeft(insert(root->getLeft(), item));
                } else if(*temp > *root) {
                    root->setRight(insert(root->getRight(), item));
                } else {
                    //duplicate value
                }
            }
            return root;
        }
        
        /**Finds the inorder successor to remove node with 2 children*/
        BinaryNode<T>* minValue(BinaryNode<T> *root){
            while(root->getLeft() != nullptr){
                root = root->getLeft();
            }
            return root;
        }
        
        /**
         * Removes an item from the tree.
         * @return True/False
         */ 
        BinaryNode<T>* remove(BinaryNode<T> *root, const T& item){
            BinaryNode<T> *temp = new BinaryNode<T>(item);
            BinaryNode<T> *newRoot;
            if(root != nullptr){
                if(*temp < *root){
                    root->setLeft(remove(root->getLeft(), item));
                } else if(*temp > *root){
                    root->setRight(remove(root->getRight(), item));
                } else {
                    if(root->getLeft() == nullptr && root->getRight() == nullptr){ //node has no children
                        delete root;
                        root = nullptr;
                    } else if(root->getLeft() == nullptr || root->getRight() == nullptr){ //node has one child
                        //replace root with its child
                        if(root->getLeft() == nullptr){
                            root = root->getRight(); //set root equal to right child
                        }else if(root->getRight() == nullptr){
                            root = root->getLeft(); //set root equal to left child
                        }
                    } else {
                        //find inorder successor
                        //replace root with inorder successor
                        //delete the duplicate entry
                        newRoot = minValue(root->getRight());
                        root->setItem(newRoot->getItem());
                        root->setRight(remove(root->getRight(),newRoot->getItem()));
                    }
                }
            }else{
                cout<<"Value is not in tree!"<<endl;
            }
            return root;
        }
        

        /**
         * Checks if the tree contains an item.
         * @return True/False
         */ 
        bool contains(BinaryNode<T> *root, const T& item) {
            if(root == nullptr) {
                return false;
            } else {
                if (item == root->getItem()) {
                  return true;
                }
                else if (item < root->getItem()) {
                  return contains(root->getLeft(), item);
                }
                else if (item > root->getItem()) {
                  return contains(root->getRight(), item);
                }
            }    
        }
        
        /**
         * Displays the pre-order traversal of the tree.
         */ 
        void preorderTraversal(BinaryNode<T> *root) {
            if(root == nullptr) return;
            cout<<root->getItem()<<endl;
            preorderTraversal(root->getLeft());
            preorderTraversal(root->getRight());
        }
        
        /**
         * Displays the in-order traversal of the tree.
         */ 
        void inorderTraversal(BinaryNode<T> *root) {
            if(root == nullptr) return;
            inorderTraversal(root->getLeft());
            cout<<root->getItem()<<endl;
            inorderTraversal(root->getRight());
        }
        
        /**
         * Displays the post-order traversal of the tree.
         */
        void postorderTraversal(BinaryNode<T> *root) {
            if(root == nullptr) return;
            postorderTraversal(root->getLeft());
            postorderTraversal(root->getRight());
            cout<<root->getItem()<<endl;
        }
        
        void displayHelp(BinaryNode<T> *root, int length) {
            if (root != nullptr)
            {
                cout<<endl;
                for (int i = 0;i < length;i++)
                    cout<<"-";
                cout<<root->getItem();
                displayHelp(root->getLeft(), length+1);
                displayHelp(root->getRight(), length+1);
                
            }
        }
        
        BinaryNode<T>* leftRotate(BinaryNode<T> *root) {
            BinaryNode<T> *temp = root->getRight();
            root->setRight(temp->getLeft());
            temp->setLeft(root);
            return temp;
        }
        
        BinaryNode<T>* rightRotate(BinaryNode<T> *root) {
            BinaryNode<T> *temp = root->getLeft();
            root->setLeft(temp->getRight());
            temp->setRight(root);
            return temp;
        }
        
        BinaryNode<T>* leftChildDouble(BinaryNode<T> *root) {
            root->setRight(rightRotate(root->getRight()));
            return leftRotate(root);
        }
        
        BinaryNode<T>* rightChildDouble(BinaryNode<T> *root) {
            root->setLeft(leftRotate(root->getLeft()));
            return rightRotate(root);
        }

        BinaryNode<T>* caseChecker(BinaryNode<T> *node){
            bool unbalanced = true;
            if (node == nullptr) return nullptr;
            while(unbalanced) {
                if ((getHeight(node->getLeft()) - getHeight(node->getRight())) <= -2 && (getHeight(node->getRight()->getLeft()) - getHeight(node->getRight()->getRight())) > 0){ //case3
                    node = leftChildDouble(node);
                } else if ((getHeight(node->getLeft()) - getHeight(node->getRight())) >= 2 && (getHeight(node->getLeft()->getLeft()) - getHeight(node->getLeft()->getRight())) < 0){ //case4
                    node = rightChildDouble(node);
                } else if ((getHeight(node->getLeft()) - getHeight(node->getRight())) >= 2){ //case2
                    node = rightRotate(node);
                } else if ((getHeight(node->getLeft()) - getHeight(node->getRight())) <= -2){ //case1
                    node = leftRotate(node);
                } else {
                    unbalanced = false;
                }
            }
            return node;
        }
        /**
         * Clears all items stored in the tree.
         */ 
        void clear(BinaryNode<T> *root) {
            while (!isEmpty(root)){
                remove(root, root->getItem());
            }
        }
        
        //Deconstructor
        ~BinarySearchTree(){
            clear(root);
        }
};