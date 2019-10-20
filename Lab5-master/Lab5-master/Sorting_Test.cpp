#include <iostream>
#include "sortingAlg.cpp"

using namespace std;

int main(){

     int arri[] = {4, 6, 3, 9, 2, 1};
     char arrc[] = {'c', 'g', 'n', 'a', 'b', 'd'};
     float arrf[] = {0.1, 2.5, 9, 4.7, 1.1, 0.2};
     double arrd[] = {0.1, 2.5, 9, 4.7, 1.1, 0.2};
     int len = 6;
    
    //Test sorting algorithims using integers
    cout<<"Tests using integer"<<endl;
    sortingAlg<int> sortInt;
    sortInt.bubbleSort(arri, len);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    sortInt.insertionSort(arri, len);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    sortInt.selectionSort(arri,len);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    sortInt.mergeSort(arri, 0, len - 1);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    sortInt.quickSort(arri, 0, len - 1);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    sortInt.radixSort(arri, len);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arri[i];
        }else{
            cout<<arri[i]<<", ";
        }
    }cout<<endl;
    
    
    //Test sorting algorithms using characters
    cout<<"Tests using characters"<<endl;
     sortingAlg<char> sortChar;

    
    sortChar.bubbleSort(arrc, len);
        for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    sortChar.insertionSort(arrc, len);
            for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    sortChar.selectionSort(arrc,len);
            for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    sortChar.mergeSort(arrc, 0, len - 1);
            for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    sortChar.quickSort(arrc, 0, len - 1);
            for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    sortChar.radixSort(arrc, len);
            for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrc[i];
        }else{
            cout<<arrc[i]<<", ";
        }
    }cout<<endl;
    
    
    
    //Test sorting algorithms using float
    cout<<"Tests using float"<<endl;
     sortingAlg<float> sortFloat;

    
    sortFloat.bubbleSort(arrf, len);
    for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    sortFloat.insertionSort(arrf, len);
         for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    sortFloat.selectionSort(arrf,len);
         for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    sortFloat.mergeSort(arrf, 0, len - 1);
         for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    sortFloat.quickSort(arrf, 0, len - 1);
         for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    sortFloat.radixSort(arrf, len);
         for (int i = 0; i < len; i++){
        if (i == len - 1){
            cout<<arrf[i];
        }else{
            cout<<arrf[i]<<", ";
        }
    }cout<<endl;
    
    
    
    //Test sorting algorithms using double
    cout<<"Tests using double"<<endl;
     sortingAlg<double> sortDouble;

    
     sortDouble.bubbleSort(arrd, len);
        for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
     sortDouble.insertionSort(arrd, len);
        for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
     sortDouble.selectionSort(arrd,len);
         for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
     sortDouble.mergeSort(arrd, 0, len - 1);
        for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
     sortDouble.quickSort(arrd, 0, len - 1);
        for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
     sortDouble.radixSort(arrd, len);
         for (int i = 0; i < len; i++){
         if (i == len - 1){
            cout<<arrd[i];
        }else{
            cout<<arrd[i]<<", ";
        }
    }cout<<endl;
}