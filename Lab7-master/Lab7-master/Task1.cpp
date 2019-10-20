#include <iostream>
#include <string>
#include "BinarySearchTree.cpp"

using namespace std;

int main(){
    BinarySearchTree<int> Tree;
    BinaryNode<int> *node;

    node = nullptr;
    
    bool on = true;
    int answer;
    bool invalidAnswer = true;
    while(on){
        while(invalidAnswer){
            cout<<"***MENU***"<<endl;
            cout<<"1 - Add item to tree"<<endl;
            cout<<"2 - Remove item from tree"<<endl;
            cout<<"0 - QUIT"<<endl;
            cout<<"Input: ";
            cin>>answer;
            if (answer == 1 || answer == 2 || answer == 0) {
                invalidAnswer = false;
            }
        }
        if (answer == 1){
            int insertNumber;
            cout<<"What number would you like to insert? ";
            cin>>insertNumber;
            node = Tree.insert(node, insertNumber);
            node = Tree.caseChecker(node);
            invalidAnswer = true;
        } else if (answer == 2) {
            int removeNumber;
            cout<<"What number would you like to remove? ";
            cin>>removeNumber;
            node = Tree.remove(node, removeNumber);
            node = Tree.caseChecker(node);
            invalidAnswer = true;
        } else {
            on = false;
        }

        cout<<endl<<"Display:"<<endl;
        Tree.displayHelp(node, 0);
        cout<<endl<<endl;
    }
    return 0;
}