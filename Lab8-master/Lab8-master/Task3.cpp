#include <iostream>
#include <chrono>
#include <ctime>
#include "minHeap.h"
#include "queue_s.h"
using namespace std;

//Random Number Generator
int random_number(int maxVal){
    return random() % maxVal;
}

int main(){
    srand ( time(NULL) );
    Queue<int> Queue;
    minHeap heap;
    int arrayHeap[20001] = {0};
    int num;

    cout<<"***** INSERT PRIORITY QUEUE *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            Queue.enqueue(random_number(9999));
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The enqueue operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }
    
    cout<<"***** INSERT MINHEAP *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            heap.insert(arrayHeap, random_number(9999));
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The insert operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }
    
    cout<<"***** REMOVE PRIORITY QUEUE *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            Queue.dequeue();
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The dequeue operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }
    
    cout<<"***** REMOVE MINHEAP *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            heap.remove(arrayHeap);
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The remove operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }
}