#include <iostream>
#include "queue_s.h"
#include "coordinates_s.h"

using namespace std;

int main(){
    Queue<coordinate> coorQueue;
    Queue<int> intQueue;
    Queue<char> charQueue;
    coordinate test(1,2);
    coordinate test2(2,9);
    coordinate test3(4,5);
    coordinate test4(3,6);
    int test5 = 10;
    int test6 = 11;
    int test7 = 12;
    int test8 = 13;
    char test9 = 'a';
    char test10 = 'b';
    char test11 = 'c';
    char test12 = 'd';
    coordinate temp;
    int temp2;
    char temp3;
    int x;
    int y;
    
    coorQueue.enqueue(test);
    coorQueue.enqueue(test2);
    coorQueue.enqueue(test3);
    coorQueue.enqueue(test4);
    
    intQueue.enqueue(test5);
    intQueue.enqueue(test6);
    intQueue.enqueue(test7);
    intQueue.enqueue(test8);
    
    charQueue.enqueue(test9);
    charQueue.enqueue(test10);
    charQueue.enqueue(test11);
    charQueue.enqueue(test12);
    
    for (int i = 0; i < 4; i++){
        temp = coorQueue.peekFront();
        x = temp.getX();
        y = temp.getY();
        
        cout<<x<<" , "<<y<<endl;
        coorQueue.dequeue();
    }
    
    for (int i = 0; i < 4; i++){
        temp2 = intQueue.peekFront();
        cout<<temp2<<endl;
        intQueue.dequeue();
    }
    
    for (int i = 0; i < 4; i++){
        temp3 = charQueue.peekFront();
        cout<<temp3<<endl;
        charQueue.dequeue();
    }
}