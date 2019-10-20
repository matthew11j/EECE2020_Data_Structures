#include <iostream>
#include <chrono>
#include <ctime>
#include <array>
#include "sortingAlg.cpp"

using namespace std;

    //Random Number Generator
    int random_number(int maxVal){
        return random() % maxVal;
    }
    
    void playGame(int &arrayInput, bool play) {
        cout<<"How large is the array? [10, 100, 500, 5000, or 25000]"<<endl;
        cin>>arrayInput;
        if (arrayInput == 10 || arrayInput == 100 || arrayInput == 500 || arrayInput == 5000 || arrayInput == 25000){
            play = true;
        }
        while (play == false) {
            cout<<"The number you entered was invalid. Please choose [10, 100, 500, 5000, or 25000]..."<<endl;
            cin>>arrayInput;
            if (arrayInput == 10 || arrayInput == 100 || arrayInput == 500 || arrayInput == 5000 || arrayInput == 25000){
                play = true;
            }
        };   
    }
    
int main(){
    srand ( time(NULL) );
    bool play = false;
    int arrayInput;
    sortingAlg<int> sort;

    playGame(arrayInput, play);
    
    if (arrayInput == 10) { //Array 10
    
        double average;
        double totalTime;
        int array10[10];
        int array10_b[10];
        int array10_i[10];
        int array10_s[10];
        int array10_m[10];
        int array10_q[10];
        int array10_r[10];

        //Populates array10 with random numbers 0-20
        for (int i=0; i < 10; i++){
            array10[i] = random_number(20);
        }
        for (int i=0; i < 10; i++){
            array10_b[i] = array10[i];
            array10_i[i] = array10[i];
            array10_s[i] = array10[i];
            array10_m[i] = array10[i];
            array10_q[i] = array10[i];
            array10_r[i] = array10[i];
        }
        
        
        //bubbleSort array10
        cout<<endl<<"Array of 10 elements..."<<endl;
        cout<<"---Bubble Sort---"<<endl;
            auto start_b = chrono::system_clock::now();
            sort.bubbleSort(array10_b, 10);
            auto stop_b = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_b[j]<<", ";
                } else {
                    cout<<array10_b[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_b = stop_b-start_b;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_b.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Insertion Sort---"<<endl;
        //insertionSort array10
            auto start_i = chrono::system_clock::now();
            sort.insertionSort(array10_i, 10);
            auto stop_i = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_i[j]<<", ";
                } else {
                    cout<<array10_i[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_i = stop_i-start_i;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_i.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Selection Sort---"<<endl;
        //selectionSort array10
       
            auto start_s = chrono::system_clock::now();
            sort.selectionSort(array10_s, 10);
            auto stop_s = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_s[j]<<", ";
                } else {
                    cout<<array10_s[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_s = stop_s-start_s;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_s.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Merge Sort---"<<endl;
        //mergeShort array10
            auto start_m = chrono::system_clock::now();
            sort.mergeSort(array10_m, 0, 10);
            auto stop_m = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_m[j]<<", ";
                } else {
                    cout<<array10_m[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_m = stop_m-start_m;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_m.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Quick Sort---"<<endl;
        //quickSort array10
            auto start_q = chrono::system_clock::now();
            sort.quickSort(array10_q, 0, 9);
            auto stop_q = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_q[j]<<", ";
                } else {
                    cout<<array10_q[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_q = stop_q-start_q;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_q.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Radix Sort---"<<endl;
        //radixSort array10
            auto start_r = chrono::system_clock::now();
            sort.radixSort(array10_r, 10);
            auto stop_r = chrono::system_clock::now();
            cout<<"And here is the array... ";
            for (int j=0; j<10; j++){
                if (j != 9){
                    cout<<array10_r[j]<<", ";
                } else {
                    cout<<array10_r[j]<<endl;
                }
            }
            chrono::duration<double> elapsedTimeSeconds_r = stop_r-start_r;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_r.count()*1000<<" ms"<<endl<<endl; 
        
        
    } else if (arrayInput == 100) { //Array 100
    
        double average;
        double totalTime;
        int array100[100];
        int array100_b[100];
        int array100_i[100];
        int array100_s[100];
        int array100_m[100];
        int array100_q[100];
        int array100_r[100];
        //Populates array100 with random numbers from 0-200
        for (int i=0; i < 100; i++){
            array100[i] = random_number(200);
        }
        for (int i=0; i < 100; i++){
            array100_b[i] = array100[i];
            array100_i[i] = array100[i];
            array100_s[i] = array100[i];
            array100_m[i] = array100[i];
            array100_q[i] = array100[i];
            array100_r[i] = array100[i];
        }
        
        
        //bubbleSort array100
        cout<<endl<<"Array of 100 elements..."<<endl; 
        cout<<"---Bubble Sort---"<<endl;
            auto start_b = chrono::system_clock::now();
            sort.bubbleSort(array100_b, 100);
            auto stop_b = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_b = stop_b-start_b;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_b.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Insertion Sort---"<<endl;
        //insertionSort array100
            auto start_i = chrono::system_clock::now();
            sort.insertionSort(array100_i, 100);
            auto stop_i = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_i = stop_i-start_i;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_i.count()*1000<<" ms"<<endl<<endl;
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Selection Sort---"<<endl;
        //selectionSort array100
            auto start_s = chrono::system_clock::now();
            sort.selectionSort(array100_s, 100);
            auto stop_s = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_s = stop_s-start_s;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_s.count()*1000<<" ms"<<endl<<endl;
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Merge Sort---"<<endl;
        //mergeShort array100
            auto start_m = chrono::system_clock::now();
            sort.mergeSort(array100_m, 0, 100);
            auto stop_m = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_m = stop_m-start_m;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_m.count()*1000<<" ms"<<endl<<endl;
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Quick Sort---"<<endl;
        //quickSort array100
            auto start_q = chrono::system_clock::now();
            sort.quickSort(array100_q, 0, 99);
            auto stop_q = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_q = stop_q-start_q;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_q.count()*1000<<" ms"<<endl<<endl;
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Radix Sort---"<<endl;
        //radixSort array100
            auto start_r = chrono::system_clock::now();
            sort.radixSort(array100_r, 100);
            auto stop_r = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_r = stop_r-start_r;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_r.count()*1000<<" ms"<<endl<<endl;
        
        
    } else if (arrayInput == 500) { //Array 500
    
        double average;
        double totalTime;
        int array500[500];
        int array500_b[500];
        int array500_i[500];
        int array500_s[500];
        int array500_m[500];
        int array500_q[500];
        int array500_r[500];
        //Populates array500 with random numbers 0-1000
        for (int i=0; i < 500; i++){
            array500[i] = random_number(1000);
        }
        for (int i=0; i < 500; i++){
            array500_b[i] = array500[i];
            array500_i[i] = array500[i];
            array500_s[i] = array500[i];
            array500_m[i] = array500[i];
            array500_q[i] = array500[i];
            array500_r[i] = array500[i];
        }
        
        
        //bubbleSort array500
        cout<<endl<<"Array of 500 elements..."<<endl; 
        cout<<"---Bubble Sort---"<<endl;
            auto start_b = chrono::system_clock::now();
            sort.bubbleSort(array500_b, 500);
            auto stop_b = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_b = stop_b-start_b;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_b.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Insertion Sort---"<<endl;
        //insertionSort array500
            auto start_i = chrono::system_clock::now();
            sort.insertionSort(array500_i, 500);
            auto stop_i = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_i = stop_i-start_i;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_i.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Selection Sort---"<<endl;
        //selectionSort array500
            auto start_s = chrono::system_clock::now();
            sort.selectionSort(array500_s, 500);
            auto stop_s = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_s = stop_s-start_s;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_s.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Merge Sort---"<<endl;
        //mergeShort array500
            auto start_m = chrono::system_clock::now();
            sort.mergeSort(array500_m, 0, 500);
            auto stop_m = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_m = stop_m-start_m;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_m.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Quick Sort---"<<endl;
        //quickSort array500
            auto start_q = chrono::system_clock::now();
            sort.quickSort(array500_q, 0, 499);
            auto stop_q = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_q = stop_q-start_q;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_q.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Radix Sort---"<<endl;
        //radixSort array500
            auto start_r = chrono::system_clock::now();
            sort.radixSort(array500_r, 500);
            auto stop_r = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_r = stop_r-start_r;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_r.count()*1000<<" ms"<<endl<<endl; 
        
    
    } else if (arrayInput == 5000) { //Array 5000
    
        double average;
        double totalTime;
        int array5000[5000];
        int array5000_b[5000];
        int array5000_i[5000];
        int array5000_s[5000];
        int array5000_m[5000];
        int array5000_q[5000];
        int array5000_r[5000];
        //Populates array with random numbers 0-10000
        for (int i=0; i < 5000; i++){
            array5000[i] = random_number(10000);
        }
        for (int i=0; i < 5000; i++){
            array5000_b[i] = array5000[i];
            array5000_i[i] = array5000[i];
            array5000_s[i] = array5000[i];
            array5000_m[i] = array5000[i];
            array5000_q[i] = array5000[i];
            array5000_r[i] = array5000[i];
        }
        
        average = 0;
        totalTime = 0;
        //bubbleSort array5000
        cout<<endl<<"Array of 5000 elements..."<<endl; 
        cout<<"---Bubble Sort---"<<endl;
            auto start_b = chrono::system_clock::now();
            sort.bubbleSort(array5000_b, 5000);
            auto stop_b = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_b = stop_b-start_b;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_b.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Insertion Sort---"<<endl;
        //insertionSort array5000
            auto start_i = chrono::system_clock::now();
            sort.insertionSort(array5000_i, 5000);
            auto stop_i = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_i = stop_i-start_i;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_i.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Selection Sort---"<<endl;
        //selectionSort array5000
            auto start_s = chrono::system_clock::now();
            sort.selectionSort(array5000_s, 5000);
            auto stop_s = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_s = stop_s-start_s;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_s.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Merge Sort---"<<endl;
        //mergeShort array5000
            auto start_m = chrono::system_clock::now();
            sort.mergeSort(array5000_m, 0, 5000);
            auto stop_m = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_m = stop_m-start_m;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_m.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Quick Sort---"<<endl;
        //quickSort array5000
            auto start_q = chrono::system_clock::now();
            sort.quickSort(array5000_q, 0, 4999);
            auto stop_q = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_q = stop_q-start_q;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_q.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Radix Sort---"<<endl;
        //radixSort array5000
            auto start_r = chrono::system_clock::now();
            sort.radixSort(array5000_r, 5000);
            auto stop_r = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_r = stop_r-start_r;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_r.count()*1000<<" ms"<<endl<<endl; 
        
    
    } else { //Array 25000
    
        double average;
        double totalTime;
        int array25000[25000];
        int array25000_b[25000];
        int array25000_i[25000];
        int array25000_s[25000];
        int array25000_m[25000];
        int array25000_q[25000];
        int array25000_r[25000];
        //Populates array with random numbers 0-50000
        for (int i=0; i < 25000; i++){
            array25000[i] = random_number(50000);
        }
        for (int i=0; i < 25000; i++){
            array25000_b[i] = array25000[i];
            array25000_i[i] = array25000[i];
            array25000_s[i] = array25000[i];
            array25000_m[i] = array25000[i];
            array25000_q[i] = array25000[i];
            array25000_r[i] = array25000[i];
        }
        
 
        average = 0;
        totalTime = 0;
        //bubbleSort array25000
        cout<<endl<<"Array of 25000 elements..."<<endl; 
        cout<<"---Bubble Sort---"<<endl;
            auto start_b = chrono::system_clock::now();
            sort.bubbleSort(array25000_b, 25000);
            auto stop_b = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_b = stop_b-start_b;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_b.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Insertion Sort---"<<endl;
        //insertionSort array25000
            auto start_i = chrono::system_clock::now();
            sort.insertionSort(array25000_i, 25000);
            auto stop_i = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_i = stop_i-start_i;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_i.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Selection Sort---"<<endl;
        //selectionSort array25000
            auto start_s = chrono::system_clock::now();
            sort.selectionSort(array25000_s, 25000);
            auto stop_s = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_s = stop_s-start_s;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_s.count()*1000<<" ms"<<endl<<endl; 
        
    
        cout<<"---Merge Sort---"<<endl;
        //mergeShort array25000
            auto start_m = chrono::system_clock::now();
            sort.mergeSort(array25000_m, 0, 25000);
            auto stop_m = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_m = stop_m-start_m;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_m.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Quick Sort---"<<endl;
        //quickSort array25000
            auto start_q = chrono::system_clock::now();
            sort.quickSort(array25000_q, 0, 24999);
            auto stop_q = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_q = stop_q-start_q;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_q.count()*1000<<" ms"<<endl<<endl; 
        
        
        average = 0;
        totalTime = 0;
        cout<<"---Radix Sort---"<<endl;
        //radixSort array25000
            auto start_r = chrono::system_clock::now();
            sort.radixSort(array25000_r, 25000);
            auto stop_r = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds_r = stop_r-start_r;
            cout<<"The array was sorted in: "<<elapsedTimeSeconds_r.count()*1000<<" ms"<<endl<<endl; 
        
        
    }
    
    return 0;
}