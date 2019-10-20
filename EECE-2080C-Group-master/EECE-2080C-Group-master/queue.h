
class Queue {
    private:
        char items[SIZE];
        int front,back;
    public:
        Queue(){
            front = 0;
            back = -1;
        }
        void enqueue(int x);
        int dequeue();
        char peekFirst();
        bool isEmpty();
        int size();
};

void Queue::enqueue(int x) {
    if(back < SIZE){
        items[++back] = x;
    } else {
        std::cout<<"The queue is full!"<<std::endl;
    }
}

int Queue::dequeue(){
    if(!isEmpty()){
        return items[front++];
    } else {
        std::cout<<"The queue is empty!"<<std::endl;
        //return '/0';
    }
}

char Queue::peekFirst() {
    if(!isEmpty()){
         return items[front];
    } else {
         std::cout<<"The stack is empty!"<<std::endl;
    }
}

bool Queue::isEmpty(){
    return back < front;
}

int Queue::size(){
    return back - front +1;
}
