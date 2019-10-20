#include <iostream>

using namespace std;

#ifndef _STACK_INTERFACE
#define _STACK_INTERFACE

template<class T>
class StackInterface {
    public:
        /** 
         * Adds a new item to the stack.
         * @return True if successful, or False if not.
         */
        virtual bool push(const T&) = 0;

        /** 
         * Removes the top most item from the stack.
         * @return True if successful, or False if not.
         */
        virtual bool pop() = 0;

        /** 
         * Retrieves the top most item from the stack.
         * @return item
         */
        virtual T peek() const = 0;

        /** 
         * Checks if the stack is empty.
         * @return True if empty, or False if not.
         */
        virtual bool isEmpty() const = 0;
};
#endif
