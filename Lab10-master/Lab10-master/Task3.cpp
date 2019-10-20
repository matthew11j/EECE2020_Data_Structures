#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include "Task1.cpp"

using namespace std;

//Random Number Generator
int random_number(int maxVal){
    return random() % maxVal;
}

int main(){
    srand ( time(NULL) );
    HashTable Table;
    int num;

    cout<<"***** INSERT HASH TABLE *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            string key;
            key[0] = i;
            key[1] = j;
            Table.add(key, random_number(9999));
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The add operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }
    
    cout<<"***** Get HASH TABLE *****"<<endl;
    for (int i = 0; i < 20; i++){
        auto start = chrono::system_clock::now();
        for (int j = 0; j < 100; j++){
            string key;
            key[0] = random_number(2500);
            Table.get(key);
        }
        auto stop = chrono::system_clock::now();
        chrono::duration<double> elapsedTimeSeconds = stop-start;
        cout<<"The get operation finished in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
    }

}