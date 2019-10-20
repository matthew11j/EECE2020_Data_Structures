const int SIZE=100;

class Stack {
    private:
       int top = -1;
       char items[SIZE];
    public:
    void push(int x);
    int pop();
    char peek();
    bool isEmpty();
    int size();
    bool isFull(int x);
};

void Stack::push(int x)
{
    if(top<SIZE){
         items[++top] = x;
     } else {
         std::cout<<"The stack is full!"<<std::endl;
     }
}
int Stack::pop()
{
     if(!isEmpty()){
        int temp = items[top];
        top-=1;
        return temp; 
     } else {
         std::cout<<"The stack is empty!"<<std::endl;
     }
}
 
char Stack::peek(){
     if(!isEmpty()){
         return items[++top];
     } else {
         std::cout<<"The stack is empty!"<<std::endl;
     }
 }
 
 bool Stack::isEmpty(){
     return top == -1;
 }
 
 int Stack::size(){
     return top+1;
 }
 
bool Stack::isFull(int numRings)
{
    return (top == (numRings - 1));
}
