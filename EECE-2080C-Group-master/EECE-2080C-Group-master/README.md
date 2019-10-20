# Lab 2: Stacks and Queues

## Objectives and Concepts:
   The objective of this lab was to create the game, Towers of Hanoi, and implementing it using Stacks and Queues.
   The main objective of this lab was to learn how stacks and queues work and how to implement them in a program.
   The header files created helped us to understand how functions that already exist in C++ work to manipulate stacks and queues.
   It's important to understand how functions that already exist in C++ operate so we can insure our programs work as intended.

## Implementation of Task 4:
    Three queues were created to store the rings moved,the towers they were moved from, and the towers they were moved to. 
    With each move a new element was added to each queue to track the moves.
    After the player wins the game, the contents of each queue are dequeued into arrays.
    Finally, each arrary printed out to show the player all the moves they made.

## Contributions:
    Matthew Jackson:  Adding function to track and display moves made
    Nathan Sucher:    Created function to display towers
    Sara VanDewerker: Created Stack and Queue header files
    
    All other functions were created as a collaboration between all three partners.
    
## Game Outputs
![Game Start](/images/gameStart.PNG)

Figure 1: The Start of the Game

![First Move](/images/firstMove.PNG)

Figure 2: The First Move

![Empty Source Stack](/images/emptySourceStack.PNG)

Figure 3: Empty Source Stack Error

![Backwards Stack Error](/images/backwardsStackError.PNG)

Figure 4: Invalid Move

![Game Win](/images/gameWin.PNG)

Figure 5: Output of All Moves Made in Game
