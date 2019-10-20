#include <iostream>
#include <string>
#include "Graph.h"

using namespace std;

int main(){
    Graph graph;
    bool run = true;
    int answer;
    bool invalidAnswer = true;
    do {
        while(invalidAnswer){
            cout<<"***MENU***"<<endl;
            cout<<"1 - Add an edge to the graph."<<endl;
            cout<<"2 - Remove an edge from the graph."<<endl;
            cout<<"3 - Check if the graph contains an edge."<<endl;
            cout<<"4 - View adjacent vertices of a given vertex."<<endl;
            cout<<"5 - Display the graph."<<endl;
            cout<<"6 - QUIT"<<endl;
            cout<<"Input: ";
            cin>>answer;
            if (answer > 0 && answer < 7) {
                invalidAnswer = false;
            }
        }
        if (answer == 1){
            invalidAnswer = true;
            int from;
            int to;
            graph.getInputs(from, to, "add");
            graph.addEdge(from, to);
            invalidAnswer = true;
        } else if (answer == 2) {
            invalidAnswer = true;
            int from;
            int to;
            graph.getInputs(from, to, "remove");
            graph.removeEdge(from, to);
            invalidAnswer = true;
        } else if (answer == 3) {
            invalidAnswer = true;
            int from;
            int to;
            graph.getInputs(from, to, "check");
            graph.hasEdge(from, to);
            invalidAnswer = true;
        } else if (answer == 4) {
            invalidAnswer = true;
            int from;
            while (invalidAnswer){
                cout<<"What vertex would you like to check the adjacent edge FROM? [1-10] ";
                cin>>from;
                if (from > 0 && from < 11) {
                    invalidAnswer = false;
                }else{
                    cout<<"Must enter a value between 1 and 10."<<endl;
                    invalidAnswer = true;
                }
            }
            invalidAnswer = true;
            graph.getAdjacentVertices(from);
        } else if (answer == 5) {
            graph.displayBoard();
            invalidAnswer = true;
        } else {
            run = false;
        }
        cout<<endl<<endl;
    } while(run);
    
    return 0;
}