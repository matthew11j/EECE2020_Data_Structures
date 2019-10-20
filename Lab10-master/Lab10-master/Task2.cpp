#include <iostream>
#include <string>
#include "Task1.cpp"

using namespace std;

int main(){
    HashTable Table;
    bool run = true;
    int answer;
    bool invalidAnswer = true;
    int value;
    string key;
    do {
        while(invalidAnswer){
            cout<<"***MENU***"<<endl;
            cout<<"1 - Add"<<endl;
            cout<<"2 - Remove"<<endl;
            cout<<"3 - Get"<<endl;
            cout<<"4 - GetLength"<<endl;
            cout<<"5 - QUIT"<<endl;
            cout<<"Input: ";
            cin>>answer;
            if (answer > 0 && answer < 6) {
                invalidAnswer = false;
            }
        }
        if (answer == 1){
            cout<<"Enter value to be inserted: ";
            cin>>value;
            cout<<"Enter key: ";
            cin>>key;
            Table.add(key, value);
            invalidAnswer = true;
        } else if (answer == 2) {
            cout<<"Enter key: ";
            cin>>key;
            if (Table.get(key) == -1){
                cout<<"No element at that key."<<endl;
            }else{
                cout<<"Element at key is "<<Table.get(key)<<"."<<endl;
                Table.remove(key);
                cout<<"Element deleted."<<endl;
            }
            invalidAnswer = true;
        } else if (answer == 3) {
            cout<<"Enter key: ";
            cin>>key;
            if (Table.get(key) == -1){
                cout<<"No element at that key."<<endl;
            }else{
                cout<<"Element at key is "<<Table.get(key)<<"."<<endl;
            }
            invalidAnswer = true;
        } else if (answer == 4) {
            cout<<"The length is "<<Table.getLength()<<"."<<endl;
            invalidAnswer = true;
        } else if (answer == 5) {
            run = false;
        } 
        cout<<endl<<endl;
    } while(run);
    
    return 0;
}