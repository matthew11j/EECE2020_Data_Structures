#include <iostream>
#include "stack_s.h"
#include "coordinates_s.h"
#include "queue_s.h"

using namespace std;

//Asking the user what size board they want to use
void startGame(int &numRows, bool &play) {
    cout<<"How many rows are in your board? [7, 8, or 10]"<<endl;
    cin>>numRows;
    cout<<endl;
    while(play == false) {
        if(numRows == 7 || numRows == 8 || numRows == 10){
            play = true;
        } else {
            cout<<"The number you entered is invalid...Please enter a 7, 8, or 10."<<endl;
            cin>>numRows;
            cout<<endl;
        }
    }
}

//Has the mazed passed to it and displays the maze
void displayMaze(char maze[12][12], int numRows){
    int numDashes = 0;
    if (numRows == 7){
        numDashes = 16;
    } else if (numRows == 8) {
        numDashes = 22;
    } else {
        numDashes = 26;
    }
    for(int i=0; i<=numRows; i++){
        cout<<i<<" ";
    }
        cout<<endl;
    for(int j=0; j<numDashes; j++){
        cout<<"-";
    }
        cout<<endl;
    for(int i=0; i<numRows; i++){
        for(int j=0; j<numRows+1; j++){
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){
    Stack<coordinate> moves; //Initializing the stack
    Queue<coordinate> allMoves; //Initializing the queue
    bool play = false;
    int col_x = 1; //starting column
    int row_y = 0; //starting row
    coordinate temp;
    int tempx, tempy;
    int numRows = 0;
    int rMax,cMax;
    int n = 1; //for outputting all the moves in the queue
    
    // Creating mazes
    char maze7[7][8];
    maze7[0][0] = '|'; maze7[0][1] = '_'; maze7[0][2] = '|'; maze7[0][3] = '|'; maze7[0][4] = '_'; maze7[0][5] = '|'; maze7[0][6] = '|'; maze7[0][7] = '|';
    maze7[1][0] = '|'; maze7[1][1] = '_'; maze7[1][2] = '_'; maze7[1][3] = '_'; maze7[1][4] = '_'; maze7[1][5] = '_'; maze7[1][6] = '_'; maze7[1][7] = '|';
    maze7[2][0] = '|'; maze7[2][1] = '|'; maze7[2][2] = '|'; maze7[2][3] = '|'; maze7[2][4] = '|'; maze7[2][5] = '|'; maze7[2][6] = '_'; maze7[2][7] = '|';
    maze7[3][0] = '|'; maze7[3][1] = '_'; maze7[3][2] = '_'; maze7[3][3] = '_'; maze7[3][4] = '_'; maze7[3][5] = '_'; maze7[3][6] = '_'; maze7[3][7] = '_';
    maze7[4][0] = '|'; maze7[4][1] = '|'; maze7[4][2] = '_'; maze7[4][3] = '|'; maze7[4][4] = '|'; maze7[4][5] = '|'; maze7[4][6] = '|'; maze7[4][7] = '|';
    maze7[5][0] = '|'; maze7[5][1] = '_'; maze7[5][2] = '_'; maze7[5][3] = '|'; maze7[5][4] = '_'; maze7[5][5] = '_'; maze7[5][6] = '_'; maze7[5][7] = '_';
    maze7[6][0] = '|'; maze7[6][1] = '|'; maze7[6][2] = '_'; maze7[6][3] = '_'; maze7[6][4] = '_'; maze7[6][5] = '|'; maze7[6][6] = '|'; maze7[6][7] = '_';
    
    char maze8[8][9];
    maze8[0][0] = '|'; maze8[0][1] = '_'; maze8[0][2] = '|'; maze8[0][3] = '|'; maze8[0][4] = '_'; maze8[0][5] = '_'; maze8[0][6] = '_'; maze8[0][7] = '|'; maze8[0][8] = '|';
    maze8[1][0] = '|'; maze8[1][1] = '_'; maze8[1][2] = '|'; maze8[1][3] = '|'; maze8[1][4] = '_'; maze8[1][5] = '|'; maze8[1][6] = '_'; maze8[1][7] = '|'; maze8[1][8] = '|';
    maze8[2][0] = '|'; maze8[2][1] = '_'; maze8[2][2] = '_'; maze8[2][3] = '_'; maze8[2][4] = '_'; maze8[2][5] = '|'; maze8[2][6] = '_'; maze8[2][7] = '|'; maze8[2][8] = '|';
    maze8[3][0] = '|'; maze8[3][1] = '_'; maze8[3][2] = '|'; maze8[3][3] = '|'; maze8[3][4] = '|'; maze8[3][5] = '|'; maze8[3][6] = '_'; maze8[3][7] = '_'; maze8[3][8] = '_';
    maze8[4][0] = '|'; maze8[4][1] = '_'; maze8[4][2] = '|'; maze8[4][3] = '|'; maze8[4][4] = '|'; maze8[4][5] = '|'; maze8[4][6] = '_'; maze8[4][7] = '|'; maze8[4][8] = '_';
    maze8[5][0] = '|'; maze8[5][1] = '_'; maze8[5][2] = '_'; maze8[5][3] = '|'; maze8[5][4] = '_'; maze8[5][5] = '_'; maze8[5][6] = '_'; maze8[5][7] = '|'; maze8[5][8] = '|';
    maze8[6][0] = '|'; maze8[6][1] = '|'; maze8[6][2] = '_'; maze8[6][3] = '|'; maze8[6][4] = '_'; maze8[6][5] = '|'; maze8[6][6] = '|'; maze8[6][7] = '|'; maze8[6][8] = '|';
    maze8[7][0] = '|'; maze8[7][1] = '|'; maze8[7][2] = '|'; maze8[7][3] = '|'; maze8[7][4] = '_'; maze8[7][5] = '_'; maze8[7][6] = '_'; maze8[7][7] = '_'; maze8[7][8] = '_';
    
    char maze10[10][11];
    maze10[0][0] = '|'; maze10[0][1] = '_'; maze10[0][2] = '|'; maze10[0][3] = '_'; maze10[0][4] = '_'; maze10[0][5] = '|'; maze10[0][6] = '_'; maze10[0][7] = '|'; maze10[0][8] = '|'; maze10[0][9] = '|'; maze10[0][10] = '|';
    maze10[1][0] = '|'; maze10[1][1] = '_'; maze10[1][2] = '|'; maze10[1][3] = '|'; maze10[1][4] = '_'; maze10[1][5] = '|'; maze10[1][6] = '_'; maze10[1][7] = '|'; maze10[1][8] = '_'; maze10[1][9] = '_'; maze10[1][10] = '_';
    maze10[2][0] = '|'; maze10[2][1] = '_'; maze10[2][2] = '_'; maze10[2][3] = '_'; maze10[2][4] = '_'; maze10[2][5] = '_'; maze10[2][6] = '_'; maze10[2][7] = '|'; maze10[2][8] = '|'; maze10[2][9] = '|'; maze10[2][10] = '_';
    maze10[3][0] = '|'; maze10[3][1] = '_'; maze10[3][2] = '|'; maze10[3][3] = '|'; maze10[3][4] = '_'; maze10[3][5] = '|'; maze10[3][6] = '_'; maze10[3][7] = '_'; maze10[3][8] = '|'; maze10[3][9] = '_'; maze10[3][10] = '_';
    maze10[4][0] = '|'; maze10[4][1] = '_'; maze10[4][2] = '|'; maze10[4][3] = '|'; maze10[4][4] = '_'; maze10[4][5] = '_'; maze10[4][6] = '|'; maze10[4][7] = '_'; maze10[4][8] = '_'; maze10[4][9] = '_'; maze10[4][10] = '|';
    maze10[5][0] = '|'; maze10[5][1] = '_'; maze10[5][2] = '|'; maze10[5][3] = '|'; maze10[5][4] = '|'; maze10[5][5] = '_'; maze10[5][6] = '|'; maze10[5][7] = '|'; maze10[5][8] = '|'; maze10[5][9] = '_'; maze10[5][10] = '|';
    maze10[6][0] = '|'; maze10[6][1] = '_'; maze10[6][2] = '|'; maze10[6][3] = '|'; maze10[6][4] = '|'; maze10[6][5] = '_'; maze10[6][6] = '_'; maze10[6][7] = '_'; maze10[6][8] = '|'; maze10[6][9] = '_'; maze10[6][10] = '_';
    maze10[7][0] = '|'; maze10[7][1] = '_'; maze10[7][2] = '_'; maze10[7][3] = '_'; maze10[7][4] = '|'; maze10[7][5] = '|'; maze10[7][6] = '|'; maze10[7][7] = '_'; maze10[7][8] = '|'; maze10[7][9] = '|'; maze10[7][10] = '_';
    maze10[8][0] = '|'; maze10[8][1] = '|'; maze10[8][2] = '_'; maze10[8][3] = '_'; maze10[8][4] = '_'; maze10[8][5] = '_'; maze10[8][6] = '|'; maze10[8][7] = '_'; maze10[8][8] = '|'; maze10[8][9] = '|'; maze10[8][10] = '_';
    maze10[9][0] = '|'; maze10[9][1] = '|'; maze10[9][2] = '|'; maze10[9][3] = '|'; maze10[9][4] = '|'; maze10[9][5] = '_'; maze10[9][6] = '|'; maze10[9][7] = '|'; maze10[9][8] = '|'; maze10[9][9] = '|'; maze10[9][10] = '_';
    
    startGame(numRows,play); //Runs startGame program to see what size maze the user wants to play
    
    char maze[12][12] = {0}; //Intitializing the maze array
    
    //Fills the maze array with the maze that the user wanted
    if (numRows == 7){
         rMax = 6;
         cMax = 7;
	    for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < numRows+1; j++) {
                maze[i][j] = maze7[i][j];
            }
        }
	} else if (numRows == 8){
	     rMax = 7;
         cMax = 8;
	    for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < numRows+1; j++) {
                maze[i][j] = maze8[i][j];
            }
        }
	} else if (numRows == 10){
	     rMax = 9;
         cMax = 10;
	    for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < numRows+1; j++) {
                maze[i][j] = maze10[i][j];
            }
        } 
	}
    
    maze[row_y][col_x] = '*'; //Sets the starting position
    
    displayMaze(maze, numRows); //Displays maze before solution
    
    moves.push(coordinate(col_x,row_y)); //Pushes the first position into the stack
    
    //While loop runs as long as the position is not at the finish
    while (play){
        
        temp = moves.peek();
        tempx = temp.getX();
        tempy = temp.getY();
        
        if (maze[row_y-1][col_x] == '_' && row_y - 1 >= 0){ //Test valid move North
			maze[row_y-1][col_x] = '*';
			moves.push(coordinate(col_x,row_y-1));
			allMoves.enqueue(coordinate(col_x,row_y-1));
			row_y--;
        }else if (maze[row_y+1][col_x] == '_'){ //Test valid move South
			maze[row_y+1][col_x] = '*';
			moves.push(coordinate(col_x,row_y+1));
			allMoves.enqueue(coordinate(col_x,row_y+1));
			row_y++;
		}else if (maze[row_y][col_x+1] == '_'){  //Tests valid move East
            maze[row_y][col_x+1]='*';
            moves.push(coordinate(col_x+1,row_y));
            allMoves.enqueue(coordinate(col_x+1,row_y));
			col_x++;
		}else if (maze[row_y][col_x-1] == '_'){ //Test valid move West
		    maze[row_y][col_x-1] = '*';
			moves.push(coordinate(col_x-1,row_y));
			allMoves.enqueue(coordinate(col_x-1,row_y));
			col_x--;
		}else if (maze[row_y-1][col_x+1] == '_' && row_y - 1 >= 0){ //Test Northeast
		    maze[row_y-1][col_x+1] = '*';
			moves.push(coordinate(col_x+1,row_y-1));
			allMoves.enqueue(coordinate(col_x+1,row_y-1));
		    row_y--;
		    col_x++;
		}else if (maze[row_y+1][col_x+1] == '_'){ //Tests Southeast
		    maze[row_y+1][col_x+1] = '*';
			moves.push(coordinate(col_x+1,row_y+1));
			allMoves.enqueue(coordinate(col_x+1,row_y+1));
		    row_y++;
		    col_x++;
		}else if (maze[row_y+1][col_x-1] == '_'){ //Test Southwest
		    maze[row_y+1][col_x-1] = '*';
			moves.push(coordinate(col_x+1,row_y-1));
			allMoves.enqueue(coordinate(col_x+1,row_y-1));
		    row_y++;
		    col_x--;
		}else if (maze[row_y-1][col_x-1] == '_' && row_y - 1 >= 0){ //Test Northwest
		    maze[row_y-1][col_x-1] = '*';
			moves.push(coordinate(col_x-1,row_y-1));;
			allMoves.enqueue(coordinate(col_x-1,row_y-1));
		    row_y--;
		    col_x--;
		}else{
		    //For Backtracking
		    maze[tempy][tempx] = 'X';
		    moves.pop();
		    temp = moves.peek();
		    tempx = temp.getX();
		    tempy = temp.getY();
		    col_x = tempx;
		    row_y = tempy;
		    allMoves.enqueue(coordinate(col_x,row_y));
		}
        
        //Displays the winning maze and prints out all the moves
        if(row_y == rMax && col_x == cMax){
            play = false;
            displayMaze(maze, numRows);
            cout<<"WINNER!"<<endl;
            
            cout<<endl;
            cout<<" ALL MOVES "<<endl;
            cout<<"-----------"<<endl;
            while (!allMoves.isEmpty()){
                temp = allMoves.peekFront();
                tempx = temp.getX();
                tempy = temp.getY();
                cout<<"Move "<<n<<": ["<<tempy<<","<<tempx<<"]"<<endl;
                allMoves.dequeue();
                n++;
            }
        }
	}
    moves.~Stack(); //Runs the stack destructor
    allMoves.~Queue(); //Runs the queue destructor
    return 0;
}

   
                   