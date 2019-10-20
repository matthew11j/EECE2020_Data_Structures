#include <iostream>

using namespace std;

class minHeap{
  private:
    int count = 0;
  public:
    minHeap(){
        
    }
   void compareBT(int heap[], int pos) {
        if (heap[pos] > heap[pos/2]) return;
        if (heap[pos] < heap[pos/2]) {
            int temp = heap[pos/2];
            heap[pos/2] = heap[pos];
            heap[pos] = temp;
            compareBT(heap, pos/2);
        }    
   }
   
   void compareTB(int heap[], int pos) {
        if ((heap[pos] < heap[pos*2] || heap[pos*2] == 0) && (heap[pos] < heap[(pos*2)+1]) || heap[(pos*2)+1] == 0) return;
        if (heap[pos*2] < heap[(pos*2)+1]) {
            if (heap[pos] > heap[pos*2]) {
                int temp = heap[pos*2];
                heap[pos*2] = heap[pos];
                heap[pos] = temp;
                compareTB(heap, pos*2);
            }
        } else {
            if (heap[pos] > heap[(pos*2)+1]) {
                int temp = heap[(pos*2)+1];
                heap[(pos*2)+1] = heap[pos];
                heap[pos] = temp;
                compareTB(heap, (pos*2)+1);
            }
        }   
   }
  
    void insert(int heap[], int item) {
        heap[count+1] = item;
        count++;
        compareBT(heap, count);
    }
    
    void remove(int heap[]) {
        heap[1] = heap[count];
        heap[count] = 0;
        count--;
        compareTB(heap, 1);
    }
    
    void display(int heap[]) {
        for (int i = 1; i<count+1; i++) {
            if(i == count){
                cout<<heap[i];
            } else {
                cout<<heap[i]<<", ";
            }
        }
        cout<<endl;
    }
};
