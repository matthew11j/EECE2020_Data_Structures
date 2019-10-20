#include <iostream>
#include "sorting_interface.h"
#include <math.h>

using namespace std;

template <class T>
class sortingAlg : public SortingInterface<T>{
    public:
        //Construtor
        sortingAlg(){
            
        }
        
        T getMaximum(T arr[], int len){
            T maximum = arr[0];
            for (int i = 1; i < len; i++){
                if (arr[i] > maximum){
                    maximum = arr[i];      
                }
            }
            return maximum;
        }
        
        int getRemainder(T num, T divisor){
             int i = 1;
            int product = 0;
            while (product <= num){
                 product = divisor * i;
                i++;
            }
             return num - (product - divisor);
        }
        


        void countSort(T arr[], int len, int exp){
            T output[len]; // output array
            int i, count[10] = {0};
            for (i = 0; i < len; i++) {
                count[ getRemainder((arr[i]/exp),10) ]++;
            }
            for (i = 1; i < 10; i++) {
                count[i] += count[i - 1];    
            }
            for (i = len - 1; i >= 0; i--) {
                output[count[ getRemainder((arr[i]/exp),10) ] - 1] = arr[i];
                count[ getRemainder((arr[i]/exp),10) ]--;
            }
            for (i = 0; i < len; i++) {
                arr[i] = output[i];   
            }
        }
        
        void bubbleSort(T arr[], int len){
            T temp;
            int count;
            bool sorted = false;
            int j = 0;
            
            while (!sorted) {
                sorted = true;
                j++;
                for (int i = 0; i < len - j; i++) {
                      if (arr[i] > arr[i + 1]) {
                            temp = arr[i];
                            arr[i] = arr[i + 1];
                            arr[i + 1] = temp;
                            sorted = false;
                      }
                }
            }
        }
        
        void insertionSort(T arr[], int len){
            T temp;
            int j;
            for (int i = 1; i < len; i++){
                temp = arr[i];
                j = i - 1;
                while (j >= 0 && arr[j] > temp){
                        arr[j+1] = arr[j];
                        j = j - 1;
                }
                arr[j+1] = temp;
            }
        }
        
        void selectionSort(T arr[], int len){
            int j, min;
            T temp;
            for (int i = 0; i < len - 1; i++){
                min = i;
                for (j = i + 1; j < len; j++){
                    if (arr[j] < arr[min]){
                         min = j;
                    }
                }
                temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }
        
        void mergeSort(T arr[], int start, int end){
            if (start < end){
                int mid = (start + end) / 2;
                mergeSort(arr, start, mid);
                mergeSort(arr, mid + 1, end);
                merge(arr, start, mid, end);
            }else{
                return;
            }
            
        }
        
        void merge(T arr[], int start, int mid, int end){
            int size = (end - start) + 1;
            T *temp = new T [size];
            
            int left_end = start;
            int right_mid = mid + 1;
            
            for (int i = 0; i < size; i++){
                if (left_end > mid){
                    temp[i] = arr[right_mid++];
                }else if (right_mid > end){
                    temp[i] = arr[left_end++];
                }else if (arr[left_end] <= arr[right_mid]){
                    temp[i] = arr[left_end++];
                }else{
                    temp[i] = arr[right_mid++];
                }
            }
            for (int i = 0; i < size; ++i){ 
                arr[start++] = temp[i];
            }
        }
        
        void quickSort(T arr[], int start, int end){
                int i, j;
                 T temp, pivot;
                 i = start;
                 j = end;
                 pivot = arr[(start + end)/2];
    
                 while (i <= j){
                     while (arr[i] < pivot){
                          i++;
                     }while(arr[j] > pivot){
                          j--;
                     }if (i <= j){
                          temp = arr[i];
                          arr[i] = arr[j];
                          arr[j] = temp;
                          i++;
                          j--;
                     }
                 }
                if (start < j){
                    quickSort(arr, start, j);
                }
                 if (i < end){
                    quickSort(arr, i, end);
                 }
            
         }
        
        void radixSort(T arr[], int len){
            //Need to find maximum number in array
            int max = getMaximum(arr, len);
         
            //Count sorting by exponent.
            for (int exp = 1; max/exp > 0; exp *= 10) {
                countSort(arr, len, exp);    
            }
        }
};