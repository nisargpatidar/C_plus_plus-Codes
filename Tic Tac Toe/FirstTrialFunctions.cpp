#include "FirstTrialFunctions.h"
#include <iostream>
using namespace std;

void CreateBoard(int arrayBoard[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arrayBoard[i][j] = 0;
        }
    }
}

void PrintBoard(int arrayBoard[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << " | " << arrayBoard[i][j];
        }
        cout << "|" << endl << "  ---------- " << endl;
    }
}

int WhichPlayerMove(int playerMove)
{
    if(playerMove == 1)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

bool CheckPlayerMove(int arrayBoard[3][3], int play)
{
    return (arrayBoard[(play-1)/3][(play-1)%3] == 0);
}

int UpdatePlayerMove(int arrayBoard[3][3], int play, int playerMove)
{
    arrayBoard[(play-1)/3][(play-1)%3] = playerMove;
    return (playerMove = WhichPlayerMove(playerMove));
}

int TakeInput(int arrayBoard[3][3], int playerMove)
{
    int play;
    cout << "Player please proceed with you play, which slot you want to make your play?" << endl;
    cin >> play;
    if (!CheckPlayerMove(arrayBoard, play))
    {
        cout  << "Incorrect move, please try again: " << endl;
        TakeInput(arrayBoard, playerMove);
    }
    else
    {
        playerMove = UpdatePlayerMove(arrayBoard, play, playerMove);
    }
    return playerMove;
}

int CheckWinner(int arrayBoard[3][3])
{
    if (arrayBoard[0][0] == arrayBoard[0][1] && arrayBoard[0][1] == arrayBoard[0][2] && arrayBoard[0][2] != 0)
    {
        return arrayBoard[0][0];
    }
    else if (arrayBoard[1][0] == arrayBoard[1][1] && arrayBoard[1][1] == arrayBoard[1][2] && arrayBoard[1][2] != 0)
    {
        return arrayBoard[1][0];
    }
    else if (arrayBoard[2][0] == arrayBoard[2][1] && arrayBoard[2][1] == arrayBoard[2][2] && arrayBoard[2][2] != 0)
    {
        return arrayBoard[2][0];
    }
    else if (arrayBoard[0][0] == arrayBoard[1][0] && arrayBoard[1][0] == arrayBoard[2][0] && arrayBoard[2][0] != 0)
    {
        return arrayBoard[0][0];
    }
    else if (arrayBoard[0][1] == arrayBoard[1][1] && arrayBoard[1][1] == arrayBoard[2][1] && arrayBoard[2][1] != 0)
    {
        return arrayBoard[0][1];
    }
    else if (arrayBoard[0][2] == arrayBoard[1][2] && arrayBoard[1][2] == arrayBoard[2][2] && arrayBoard[2][2] != 0)
    {
        return arrayBoard[0][2];
    }
    else if (arrayBoard[0][0] == arrayBoard[1][1] && arrayBoard[1][1] == arrayBoard[2][2] && arrayBoard[2][2] != 0)
    {
        return arrayBoard[0][0];
    }
    else if (arrayBoard[2][0] == arrayBoard[1][1] && arrayBoard[1][1] == arrayBoard[0][2] && arrayBoard[0][2] != 0)
    {
        return arrayBoard[2][0];
    }
    else
    {
        return 0;
    }
}