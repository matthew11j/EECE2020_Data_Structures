#include <string>
#include "BinaryNode.h"

using namespace std;
template <class T>
class BinaryTreeInterface {
    public:
        /**
         * Checks if the tree is empty.
         * @return True/False
         */
        virtual bool isEmpty(BinaryNode<T> *root) = 0;
        
        /**
         * Returns the number of nodes in the tree.
         * @return number of nodes.
         */
        virtual int size(BinaryNode<T> *root) = 0;

        virtual void sizeFinder(BinaryNode<T> *root, int& count) = 0;
        
        virtual int getHeight(BinaryNode<T> *root) = 0;
        /**
         * Inserts an item into the tree.
         * @return True/False
         */ 
        virtual BinaryNode<T>* insert(BinaryNode<T> *root, const T& item) = 0;
        
        /**
         * Removes an item from the tree.
         * @return True/False
         */ 
        virtual BinaryNode<T>* remove(BinaryNode<T> *root, const T& item) = 0;
        
        
        
        virtual bool contains(BinaryNode<T> *root, const T& item) = 0;
        
        /**
         * Displays the pre-order traversal of the tree.
         */ 
        virtual void preorderTraversal(BinaryNode<T> *root) = 0;
        
        /**
         * Displays the in-order traversal of the tree.
         */ 
        virtual void inorderTraversal(BinaryNode<T> *root) = 0;
        
        /**
         * Displays the post-order traversal of the tree.
         */ 
        virtual void postorderTraversal(BinaryNode<T> *root) = 0;
        
        virtual void displayHelp(BinaryNode<T> *root, int length) = 0;
        
        virtual BinaryNode<T>* leftRotate(BinaryNode<T> *root) = 0;
        
        virtual BinaryNode<T>* rightRotate(BinaryNode<T> *root) = 0;
        
        virtual BinaryNode<T>* leftChildDouble(BinaryNode<T> *root) = 0;
        
        virtual BinaryNode<T>* rightChildDouble(BinaryNode<T> *root) = 0;
        
        virtual BinaryNode<T>* caseChecker(BinaryNode<T> *node) = 0;
        /**
         * Clears all items stored in the tree.
         */ 
        virtual void clear(BinaryNode<T> *root) = 0;
    
};