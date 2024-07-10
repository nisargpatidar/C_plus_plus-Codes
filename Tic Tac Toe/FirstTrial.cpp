#include "FirstTrialFunctions.h"
#include "FirstTrialFunctions.cpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Please work" << endl;
    int arrayInt[3][3];
    int playerMove = 1;
    CreateBoard(arrayInt);
    
    for(int i = 0; i < 9; i++)
    {   
        playerMove = TakeInput(arrayInt, playerMove);
        PrintBoard(arrayInt);
        int winner = CheckWinner(arrayInt);
       
        if(winner != 0)
        {
            cout << "Player " << winner << " is the winner. Thank you for playing this game!!" << endl;
            break;
        }
    }

    return 0;
}