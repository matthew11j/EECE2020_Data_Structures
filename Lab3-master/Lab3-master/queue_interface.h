#ifndef _QUEUE_INTERFACE
#define _QUEUE_INTERFACE

template<class T>
class QueueInterface {
    public:
        /** 
         * Adds a new item to the back of this queue.
         * @return True if successful, or False if not.
         */
        virtual bool enqueue(const T&) = 0;

        /** 
         * Removes the item in the front of the queue.
         * @return True if successful, or False if not.
         */
        virtual bool dequeue() = 0;

        /** 
         * Retrieves the item in the front of the queue.
         * @return item
         */
        virtual T peekFront() const = 0;

        /** 
         * Checks if the qeueue is empty.
         * @return True if empty, or False if not.
         */
        virtual bool isEmpty() const = 0;
};
#endif