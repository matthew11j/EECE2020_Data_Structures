#include <iostream>
#include <array>
#include "searchAlg.h"
#include "sortingAlg.cpp"

using namespace std;

template <class T>
class searchAlg : public searchInterface<T>{
    private:

    public:
        searchAlg() {

        }

        /**
         * Takes input from array and an item.
         * @return postition of item.
         */
        int linearSearch(T arr[], T item, int sizeArray){
         int i;
         for (i = 0; i < sizeArray; i++)
             if (arr[i] == item)
                 return i;
         return -1;
        }
        
        /**
         * Takes input from array and an item.
         * @return postition of item.
         */
        int binarySearch(T arr[], T n, int arrayLength){
            sortingAlg<T> sort;
            sort.bubbleSort(arr, arrayLength);
            int first = 0;
            int last = arrayLength - 1 ;
            int mid = (last-first)/2;
            while (first <= last) {
                 mid = first + (last-first)/2;
                if (arr[mid] == n){
                    return mid;
                }else if (arr[mid] < n){
                    first = mid + 1;
                }else{
                    last = mid - 1 ;
                }
            }
        return -1;
        }
};