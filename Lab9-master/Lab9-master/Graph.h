#include <iostream>
#include <string>

using namespace std;

class Graph{
  private:
    int graphArray[11][11] = {
        {0, 0},
        {0, 0}
    };
  public:
    Graph(){
        
    }
    
    bool addEdge(int x, int y) {
        graphArray[x][0] = x;
        graphArray[0][x] = x;
        graphArray[0][y] = y;
        graphArray[y][0] = y;
        
        if (graphArray[x][y] == 1) {
            cout<<"Edge already exists."<<endl;
            return false;
        } else {
            graphArray[x][y] = 1;
            return true;
        }
    }
    
    bool removeEdge(int x, int y) {
        if (graphArray[x][y] == 0) {
            cout<<"Edge doesn't exist."<<endl;
            return false;
        } else {
            graphArray[x][y] = 0;
            return true;
        }
    }
    
    void hasEdge(int x, int y) {
        if (graphArray[x][y] == 1) {
            cout<<"Edge exists."<<endl;
        } else {
            cout<<"Edge doesn't exist."<<endl;
        }
    }
    
    void getAdjacentVertices(int x) {
        int count = 0;
        for (int i = 1; i < 11; i++) {
            if (graphArray[x][i] == 1) {
                cout<<i<<" ";
                count++;
            }
        }
        cout<<endl;
        if (count == 0) {
            cout<<"No adjacent vertices."<<endl;    
        }
    }
    
    void displayBoard(){
        cout<<"   ";
        for(int i = 1; i < 11; i++){
            cout<<graphArray[0][i]<<" ";
        }
        cout<<endl<<"  ";
        for(int i = 0; i < 21; i++){
            cout<<"_";
        }
        cout<<endl;
        for(int i = 1; i < 11; i++) {
            for(int j = 0; j < 11; j++) {
                cout<<graphArray[i][j]<<" ";
                if (j == 0) {
                    cout<<"|";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    bool getInputs(int &from, int &to, string option) {
        int invalidAnswer = true;
        while (invalidAnswer){
            cout<<"What vertex would you like to "<<option<<" the edge FROM? [1-10] ";
            cin>>from;
            if (from > 0 && from < 11) {
                invalidAnswer = false;
            } else {
                cout<<"Must enter a value between 1 and 10."<<endl;
            }
        }
        invalidAnswer = true;
        while (invalidAnswer){
            cout<<"What vertex would you like to "<<option<<" the edge TO? [1-10] ";
            cin>>to;
            if (to > 0 && to < 11) {
                invalidAnswer = false;
            } else {
                cout<<"Must enter a value between 1 and 10."<<endl;
            }
        }
    }
    
    
    ~Graph() {
        for(int i = 1; i < 11; i++) {
            for(int j = 0; j < 11; j++) {
                graphArray[i][j] = 0;
            }
        }
    }
};