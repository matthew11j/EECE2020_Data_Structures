#include <iostream>

using namespace std;

class Node {
    private:
        string key;
        int value;
    public:
        Node(string tempKey, int tempValue) {
            key = tempKey;
            value = tempValue;
        }
    
        string getKey() {
            return key;
        }
    
        int getValue() {
            return value;
        }
};
    

