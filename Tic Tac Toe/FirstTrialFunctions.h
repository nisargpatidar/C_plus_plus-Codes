void CreateBoard(int arrayBoard[3][3]);
void PrintBoard(int arrayBoard[3][3]);
bool CheckPlayerMove(int arrayBoard[3][3], int play);
int UpdatePlayerMove(int arrayBoard[3][3], int play, int playerMove);
int WhichPlayerMove(int playerMove);
int TakeInput(int arrayBoard[3][3], int playerMove);
int CheckWinner(int arrayBoard[3][3]);