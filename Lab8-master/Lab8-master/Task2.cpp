#include <iostream>
#include <string>
#include "minHeap.h"

using namespace std;

int main(){
    minHeap heap;
    int arrayHeap[20] = {0};
    bool on = true;
    int answer;
    bool invalidAnswer = true;
    while(on){
        while(invalidAnswer){
            cout<<"***MENU***"<<endl;
            cout<<"1 - Add item to Heap"<<endl;
            cout<<"2 - Remove item from Heap"<<endl;
            cout<<"0 - QUIT"<<endl;
            cout<<"Input: ";
            cin>>answer;
            if (answer == 1 || answer == 2 || answer == 0) {
                invalidAnswer = false;
            }
        }
        if (answer == 1){
            int insertNumber;
            cout<<"What number would you like to insert? ";
            cin>>insertNumber;
            heap.insert(arrayHeap, insertNumber);
            invalidAnswer = true;
        } else if (answer == 2) {
            heap.remove(arrayHeap);
            invalidAnswer = true;
        } else {
            on = false;
        }

        cout<<endl<<"Display:"<<endl;
        heap.display(arrayHeap);
        cout<<endl<<endl;
    }
    return 0;
}