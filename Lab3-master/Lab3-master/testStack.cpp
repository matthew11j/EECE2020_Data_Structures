#include <iostream>
#include "stack_s.h"
#include "coordinates_s.h"

using namespace std;

int main(){
    Stack<coordinate> coorStack;
    Stack<int> intStack;
    Stack<char> charStack;
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
    
    coorStack.push(test);
    coorStack.push(test2);
    coorStack.push(test3);
    coorStack.push(test4);
    
    intStack.push(test5);
    intStack.push(test6);
    intStack.push(test7);
    intStack.push(test8);
    
    charStack.push(test9);
    charStack.push(test10);
    charStack.push(test11);
    charStack.push(test12);
    
    for (int i = 0; i < 4; i++){
        temp = coorStack.peek();
        x = temp.getX();
        y = temp.getY();
        
        cout<<x<<" , "<<y<<endl;
        coorStack.pop();
    }
    
    for (int i = 0; i < 4; i++){
        temp2 = intStack.peek();
        cout<<temp2<<endl;
        intStack.pop();
    }
    
    for (int i = 0; i < 4; i++){
        temp3 = charStack.peek();
        cout<<temp3<<endl;
        charStack.pop();
    }
}