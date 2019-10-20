#include <iostream>
#include <chrono>
#include <ctime>
#include <array>
#include "searchAlg.cpp"

using namespace std;

    //Random Number Generator
    int random_number(int maxVal){
        return random() % maxVal;
    }
    
    void playGame(int &arrayInput, bool play) {
        cout<<"How large is the array? [10, 100, 500, 5000, or 25000]"<<endl;
        cin>>arrayInput;
        if (arrayInput == 10 || arrayInput == 100 || arrayInput == 500 || arrayInput == 5000 || arrayInput == 25000){
            play = true;
        }
        while (play == false) {
            cout<<"The number you entered was invalid. Please choose [10, 100, 500, 5000, or 25000]..."<<endl;
            cin>>arrayInput;
            if (arrayInput == 10 || arrayInput == 100 || arrayInput == 500 || arrayInput == 5000 || arrayInput == 25000){
                play = true;
            }
        };   
    }
    
int main(){
    srand ( time(NULL) );
    bool play = false;
    int arrayInput;
    bool invalidValue = false;
    searchAlg<int> search;

    playGame(arrayInput, play);
    
    if (arrayInput == 10) { //Array 10
    
        int array10[10];
        for (int i=0; i < 10; i++){
            array10[i] = random_number(10);
        }
        //linearSearch array10
        int array10Times[10];
        cout<<endl<<"Array of 10 elements..."<<endl;
        cout<<"---Linear Search---"<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random10 = random_number(10);
            cout<<"The number going to be searched for... "<<random10<<endl;
            int answer10 = search.linearSearch(array10, random10, 10);
            if (answer10 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer10+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
            }
        }
        
        cout<<"---Binary Search---"<<endl<<endl;
        //binarySearch array10
       for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random10 = random_number(10);
            cout<<"The number going to be searched for... "<<random10<<endl;
            int answer10 = search.binarySearch(array10, random10, 10);
            if (answer10 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer10+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds.count()*1000<<" ms"<<endl<<endl; 
            }
        }
        
    } else if (arrayInput == 100) { //Array 100
    
        int array100[100];
        for (int i=0; i < 100; i++){
            array100[i] = random_number(100);
        }
        //linearSearch array100
        int array100Times[100];
        cout<<endl<<"Array of 100 elements..."<<endl; 
        cout<<"---Linear Search---"<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random100 = random_number(100);
            cout<<"The number going to be searched for... "<<random100<<endl;
            int answer100 = search.linearSearch(array100, random100, 100);
            if (answer100 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer100+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds2 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds2.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds2.count()*1000<<" ms"<<endl<<endl; 
            }
        }
   
        cout<<"---Binary Search---"<<endl<<endl;
        //binarySearch array100
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random100 = random_number(100);
            cout<<"The number going to be searched for... "<<random100<<endl;
            int answer100 = search.binarySearch(array100, random100, 100);
            if (answer100 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer100+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds2 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds2.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds2.count()*1000<<" ms"<<endl<<endl; 
            }
        }
        
    } else if (arrayInput == 500) { //Array 500
    
        int array500[500];
        for (int i=0; i < 500; i++){
            array500[i] = random_number(100);
        }
        //linearSearch array500
        int array500Times[500];
        cout<<endl<<"Array of 500 elements..."<<endl; 
        cout<<"---Linear Search---"<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random500 = random_number(100);
            cout<<"The number going to be searched for... "<<random500<<endl;
            int answer500 = search.linearSearch(array500, random500, 500);
            if (answer500 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer500+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds3 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds3.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds3.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
    
        cout<<"---Binary Search---"<<endl<<endl;
        //binarySearch array500
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random500 = random_number(100);
            cout<<"The number going to be searched for... "<<random500<<endl;
            int answer500 = search.binarySearch(array500, random500, 500);
            if (answer500 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer500+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds3 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds3.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds3.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
    
    } else if (arrayInput == 5000) { //Array 5000
    
        int array5000[5000];
        for (int i=0; i < 5000; i++){
            array5000[i] = random_number(100);
        }
        //linearSearch array5000
        int array5000Times[5000];
        cout<<endl<<"Array of 5000 elements..."<<endl; 
        cout<<"---Linear Search---"<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random5000 = random_number(100);
            cout<<"The number going to be searched for... "<<random5000<<endl;
            int answer5000 = search.linearSearch(array5000, random5000, 5000);
            if (answer5000 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer5000+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds4 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds4.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds4.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
        
        //binarySearch array5000
        cout<<"---Binary Search---"<<endl<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random5000 = random_number(100);
            cout<<"The number going to be searched for... "<<random5000<<endl;
            int answer5000 = search.binarySearch(array5000, random5000, 5000);
            if (answer5000 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer5000+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds4 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds4.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds4.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
    } else { //Array 25000
    
        int array25000[25000];
        for (int i=0; i < 25000; i++){
            array25000[i] = random_number(100);
        }
        //linearSearch array25000
        cout<<endl<<"Array of 25000 elements..."<<endl;
        cout<<"---Linear Search---"<<endl;
        int array25000Times[25000];
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random25000 = random_number(100);
            cout<<"The number going to be searched for... "<<random25000<<endl;
            int answer25000 = search.linearSearch(array25000, random25000, 25000);
            if (answer25000 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer25000+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds5 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds5.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds5.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
        
        //binarySearch array25000
        cout<<"---Binary Search---"<<endl<<endl;
        for (int i=0; i < 10; i++){
            invalidValue = false;
            auto start = chrono::system_clock::now();
            int random25000 = random_number(100);
            cout<<"The number going to be searched for... "<<random25000<<endl;
            int answer25000 = search.binarySearch(array25000, random25000, 25000);
            if (answer25000 < 0){
                cout<<"This number is not in array."<<endl;
                invalidValue = true;
            } else {
                cout<<"The position in the array is... "<<answer25000+1<<endl;
            }
            auto stop = chrono::system_clock::now();
            chrono::duration<double> elapsedTimeSeconds5 = stop-start;
            if (invalidValue == true) {
                cout<<"This value isn't in the array, but the array was searched in: "<<elapsedTimeSeconds5.count()*1000<<" ms"<<endl<<endl;
            } else {
                cout<<"The value was found in: "<<elapsedTimeSeconds5.count()*1000<<" ms"<<endl<<endl; 
            } 
        }
        
    }
    
    return 0;
}
