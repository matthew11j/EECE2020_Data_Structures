#include <iostream>
#include <string>
#include "BinarySearchTree.cpp"

using namespace std;

int main(){
    BinarySearchTree<int> test;
    BinaryNode<int> *test1;

    test1 = nullptr;
    
    test1 = test.insert(test1,5);
    test1 = test.insert(test1,4);
    test1 = test.insert(test1,2);
    test1 = test.insert(test1,1);
    test1 = test.insert(test1,3);
    test1 = test.insert(test1,7);
    test1 = test.insert(test1,6);
    test1 = test.insert(test1,8);
    
    cout<<"Display: "<<endl;

    test.displayHelp(test1, 0);
    
    return 0;
}