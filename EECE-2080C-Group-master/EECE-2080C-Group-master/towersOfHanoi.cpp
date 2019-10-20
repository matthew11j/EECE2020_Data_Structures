#include <iostream>
#include <iomanip>
#include "stack.h"
#include "queue.h"

using namespace std;

class towersOfHanoi {
   public:
        void displayEndGame(Queue queueRing, Queue queueSource, Queue queueDest, int numRings) {
            int count = 0;
	        int size1 = queueRing.size();
	        int arrayR[size1];
	        char arrayS[size1];
	        char arrayD[size1];
		    //Dequeueing queues into arrarys for easier output
	        for(int i = 0; i <= size1-1; i++)
                {
                    arrayR[i] = queueRing.dequeue();
                    arrayS[i] = queueSource.dequeue();
                    arrayD[i] = queueDest.dequeue();
                }
                
	        //Outputs all the moves that were made
	        cout<<"All moves made..."<<endl;       
	        for (int i = 0; i < size1; i++){
	            cout<<"Move "<<i+1<<": ";
	            cout<<"Moved Ring '"<<arrayR[i]<<"' ";
	            cout<<"from Tower '"<<arrayS[i]<<"' ";
	            cout<<"to Tower '"<<arrayD[i]<<"'."<<endl;
	            count++;
	        }
	        cout<<endl;
	        cout<<"Total Moves: "<<count<<endl;
        }
   
	    void displayBoard(Stack a, Stack b, Stack c, int numRings) {
	        //Finding the size of each stack
	        int sizeA = a.size();
	        int sizeB = b.size();
            int sizeC = c.size();
            //Creating arrays to pop the stacks into
	        int arrayA[sizeA];
	        int arrayB[sizeB];
	        int arrayC[sizeC];
            //Popping the stacks into arrays for easier manipulation
	        for(int i = sizeA-1; i >= 0; i--)
                {
                    arrayA[i] = a.pop();
                }
                
	        for(int i = sizeB-1; i >= 0; i--)
                {
                    arrayB[i] = b.pop();
                }
                
	        for(int i = sizeC-1; i >= 0; i--)
                {
                    arrayC[i] = c.pop();
                }

	        //These are outputting the arrays for the towers
	        //setw for nice spacing 
	        cout<<"\nTower A ->"<<setw(5);        
	        for (int i = 0; i < sizeA; i++){     
	            cout<<arrayA[i]<<setw(5);
	        }
	        cout<<endl;
	        
	        cout<<"Tower B ->"<<setw(5);
	        for (int i = 0; i < sizeB; i++){
	            cout<<arrayB[i]<<setw(5);
	        }
	        cout<<endl;

	        cout<<"Tower C ->"<<setw(5);
	        for (int i = 0; i < sizeC; i++){
	            cout<<arrayC[i]<<setw(5);
	        }
	        cout<<endl;
        }

	    bool isValidMove(Stack a, Stack b, Stack c, char destTower, char sourceTower) {
	        if(sourceTower == 'a' && destTower == 'c') {
                if (c.isEmpty() == true){ //If the tower is empty, the ring should always be allowed to move to it
                    return true;
                } else if (a.pop() >= c.pop()){ //Checking to see if the ring being moved is bigger than the ring already on the stack
                    return false;
                } else {
                    return true;
                }
            }
            else if(sourceTower == 'a' && destTower == 'b') {
                if (b.isEmpty() == true){
                    return true;
                } else if (a.pop() >= b.pop()){
                    return false;
                } else {
                    return true;
                }
            }
            else if(sourceTower == 'b' && destTower == 'c') {
                if (c.isEmpty() == true){
                    return true;
                } else if (b.pop() >= c.pop()){
                    return false;
                } else {
                    return true;
                }
            }
            else if(sourceTower == 'b' && destTower == 'a') {
                if (a.isEmpty() == true){
                    return true;
                } else if (b.pop() >= a.pop()){
                    return false;
                } else {
                    return true;
                }
            }
            else if(sourceTower == 'c' && destTower == 'b') {
                if (b.isEmpty() == true){
                    return true;
                } else if  (c.pop() >= b.pop()){
                    return false;
                } else {
                    return true;
                }
            }
            else if(sourceTower == 'c' && destTower == 'a') {
                if (a.isEmpty() == true){
                    return true;
                } else if (c.pop() >= a.pop()){
                    return false;
                } else {
                    return true;
                }
            }
	    } 
};

int main() {
    Stack towerA; // create 3 empty stacks
    Stack towerB;
    Stack towerC;
    Queue queueRing; //Create 3 empty queues
    Queue queueSource;
    Queue queueDest;
    int numRings;
    int gameEnd = 0;
    int temp;
    bool validMove;
    bool play = false;
    bool validSource = false;
    bool validDestination = false;
    char destTower, sourceTower;
	towersOfHanoi game;
	
    cout<<"Enter a number between 3 and 5."<<endl;
    cin>>numRings;//Input number of disks
    cout<<endl;
    
    while(play == false) {
            if(numRings == 3 || numRings == 4 || numRings == 5){
                play = true;
            } else {
                cout<<"The number you entered is invalid...Please enter a number between 3 and 5."<<endl;
                cin>>numRings;
                cout<<endl;
            }
    }
    
    //creating the intial Tower A stack 
    for(int i = numRings; i >= 1; i--)
        {
            towerA.push(i);
        }
      
        while (gameEnd == 0) { //While the user hasn't won, the turn loop will repeat
            game.displayBoard(towerA, towerB, towerC, numRings); //Displaying the game board
            do {
                while (validSource == false) { //Making sure user chooses valid source tower
                    cout<<"\nEnter stack to move ring FROM [a, b, c]."<<endl;
                    cin>>sourceTower;
                    if (sourceTower == 'a' || sourceTower == 'b' || sourceTower == 'c') {
                        validSource = true;
                    } else {
                        cout<<"Please choose a, b, or c..."<<endl;
                    }
                    if (sourceTower == 'a' && towerA.isEmpty()) {
                        cout<<"Source stack 'A' is empty"<<endl;
                        validSource = false;
                    } else if (sourceTower == 'b' && towerB.isEmpty()) {
                        cout<<"Source stack 'B' is empty"<<endl;
                        validSource = false;
                    } else if (sourceTower == 'c' && towerC.isEmpty()) {
                        cout<<"Source stack 'C' is empty"<<endl;
                        validSource = false;
                    }
                }
                validSource = false;
                
                while (validDestination == false) { //Making sure user chooses valid destination tower
                    cout<<"\nEnter stack to move ring TO [a, b, c]."<<endl;
                    cin>>destTower;
                    if (destTower == 'a' || destTower == 'b' || destTower == 'c') {
                        validDestination = true;
                    } else {
                        cout<<"Please choose a, b, or c..."<<endl;
                    }
                }
                validDestination = false;
                
                //checking to see if a bigger ring is being placed on a smaller ring
                if (game.isValidMove(towerA, towerB, towerC, destTower, sourceTower) == false) {
                    validMove = false;
                    cout<<"Not a valid move!"<<endl;
                    game.displayBoard(towerA, towerB, towerC, numRings);
                } else {
                    validMove = true;
                }
            } while (validMove == false); //Repeats through the do-while loop if the move is invalid
      
            //Calls move function based on source and destination choice
            if(sourceTower == 'a' && destTower == 'c') {
                temp = towerA.pop();  //Pops top value in stack to temporary variable
                towerC.push(temp);  //Pushes the temp variable to the new stack
                queueRing.enqueue(temp); //Saves ring number in queue
                queueSource.enqueue(sourceTower); //Saves source tower in queue
                queueDest.enqueue(destTower); //Saves destination tower in queue
            }
            else if(sourceTower == 'a' && destTower == 'b') {
                temp = towerA.pop();
                towerB.push(temp);
                queueRing.enqueue(temp);
                queueSource.enqueue(sourceTower);
                queueDest.enqueue(destTower);
            }
            else if(sourceTower == 'b' && destTower == 'c') {
                temp = towerB.pop();
                towerC.push(temp);
                queueRing.enqueue(temp);
                queueSource.enqueue(sourceTower);
                queueDest.enqueue(destTower);
            }
            else if(sourceTower == 'b' && destTower == 'a') {
                temp = towerB.pop();
                towerA.push(temp);
                queueRing.enqueue(temp);
                queueSource.enqueue(sourceTower);
                queueDest.enqueue(destTower);
            }
            else if(sourceTower == 'c' && destTower == 'b') {
                temp = towerC.pop();
                towerB.push(temp);
                queueRing.enqueue(temp);
                queueSource.enqueue(sourceTower);
                queueDest.enqueue(destTower);
            }
            else if(sourceTower == 'c' && destTower == 'a') {
                temp = towerC.pop();
                towerA.push(temp);
                queueRing.enqueue(temp);
                queueSource.enqueue(sourceTower);
                queueDest.enqueue(destTower);
            }
            else {
                cout<<"Invalid choice!"<<endl;
            }
            
            // Ends game as Winner if tower three is full; Ends as 
            if (towerC.isFull(numRings)) {
                gameEnd = 1; 
            }
            if (gameEnd == 1) {
                game.displayBoard(towerA, towerB, towerC, numRings); //Displaying the game board on end
                cout<<"\n\n"<<endl;
                cout<<"*********"<<endl;
                cout<<" Winner!"<<endl;
                cout<<"*********\n"<<endl;
                game.displayEndGame(queueRing, queueSource, queueDest, numRings);
                return 0;
            }
        }
}
