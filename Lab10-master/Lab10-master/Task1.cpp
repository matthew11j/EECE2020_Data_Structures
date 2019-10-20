#include <iostream>
#include "node_s.h"
#include <string>

using namespace std;
const int maxSize = 3000;

class HashTable{
    private:
        Node **arr;
        int count;
        
        int hash(string key){
            int sum = 0;
            for (int i = 0; key[i] != '\0'; i++){
                if ((key[i] >= '0') && (key[i] <= '9')){
                    sum += (key[i] - '0');
                }
            }
            return sum % maxSize;
        }
        
        int hash(int key){
            return key % maxSize;
        }
        
    public:
        HashTable(){
            arr = new Node*[maxSize];
            for (int i = 0; i < maxSize; i++){
                      arr[i] = NULL;
            }
            count = 0;
        }
        
        void add (string key, int value){
            int position = hash(key);
            
             while (arr[position] != NULL && arr[position]->getKey() != key){
                      position = hash(position + 1);
             }
                if (arr[position] != NULL){
                      delete arr[position];
                }
                arr[position] = new Node(key, value);
                count++;
            
        }
        
        void remove(string key){
            int position = hash(key);
            
            while (arr[position] != NULL){
    	        if (arr[position]->getKey() == key){
    	            break;
    	        }
    	        position = hash(position + 1);
	        }
            if (arr[position] == NULL){
                return;
            }else{
                delete arr[position];
                arr[position] = NULL;
            }
            count--;
        }
        
        int get(string key){
            int position = hash(key);
            
    	    while (arr[position] != NULL && arr[position]->getKey() != key){
    	        position = hash(position + 1);
    	    }
    	    if (arr[position] == NULL){
    	        return -1;
    	    }else{
    	        return arr[position]->getValue();
    	    }
        }
        
        int getLength(){
            return count;
        }
        
        ~HashTable(){
            int length = getLength();
            
            for (int i = 0; i < length; i++){
                if(arr[i]){
                    delete arr[i];
                }
            }
            delete[] arr;
        }
};
