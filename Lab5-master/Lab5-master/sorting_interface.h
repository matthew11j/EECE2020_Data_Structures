#ifndef Sorting_Interface
#define Sorting_Interface
#include <math.h>

template <class T>
class SortingInterface{
    public:
        
        
        //Gets maximum number in array for radixSort
        virtual T getMaximum(T arr[], int len) = 0;
        
        //Count sorts the array for radixSort (Help from www.geeksforgeeks.org)
        virtual void countSort(T arr[], int len, int exp) = 0;
        
        //Sorting using bubbleSort
        virtual void bubbleSort(T arr[], int len) = 0;

        //Sorting using insertionSort
        virtual void insertionSort(T arr[], int len) = 0;
        
        //Sorting using selectionSort
        virtual void selectionSort(T arr[], int len) = 0;
        
        //Sorting using mergeSort
        virtual void mergeSort(T arr[], int start, int end) = 0;
        
        //Used for mergeSort function
        virtual void merge(T arr[], int start, int mid, int end) = 0;
        
        
        //Sorting using quickSort
         virtual void quickSort(T arr[], int start, int end) = 0;
        
        //Sorting using radixSort (Help from www.geeksforgeeks.org)
        virtual void radixSort(T arr[], int len) = 0;
};
#endif