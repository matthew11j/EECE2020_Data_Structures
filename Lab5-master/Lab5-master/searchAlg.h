#ifndef search_Interface
#define search_Interface

template <class T>
class searchInterface{
    public:
        /**
         * Takes input from array and an item.
         * @return postition of item.
         */
        virtual int linearSearch(T arr[], T n, int size)  = 0 ;
        /**
         * Takes input from array and an item.
         * @return postition of item.
         */
         virtual int binarySearch(T arr[], T n, int size) = 0;
};
#endif