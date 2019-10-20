//Infix to postfix conversion
#include <iostream>
#include "stack.h"

using namespace std;

string convert(string infix){
    Stack obj;
    string postfix="";
    for(char ch : infix){
        if(ch == '(' || ch == '*' || ch =='+'){
            obj.push(ch);
        }else if(ch == ')'){
            char temp = obj.pop();
            do{
                postfix += temp;
                if(obj.isEmpty()) break;
                temp = obj.pop();
            }while(temp != '(');
        }else{
            postfix += ch;
        }
    }
    return postfix;
}

int main(){
    string exp ="12345";
    string postfix = convert(exp);
    cout<<postfix;
    return 0;
}