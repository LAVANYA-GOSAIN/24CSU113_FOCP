//TIC TAC TOE GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];  


void Board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}


void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
        {
            printf(" %c ", board[i][j]);
            if (j < 2) 
            printf("|");
        }
        printf("\n");
        if (i < 2) 
        printf("---|---|---\n");
    }
    printf("\n");
}


char checkGameState() 
{
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ') 
            return ' ';  

    return 'D';  
}


void playerMove() 
{
    int row, col;
    while (1) 
    {
        printf("Enter your move (row and column, 1-3): ");
        scanf("%d %d", &row, &col);
        row--; 
        col--; 

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = 'X';
            break;  
        } 
        else 
        {
            printf("Invalid move. Try again.\n");
        }
    }
}


void computerMove() {
    int row, col;
    srand(time(0));  
    while (1) {
        row = rand() % 3;
        col = rand() % 3;
        if (board[row][col] == ' ') {
            board[row][col] = 'O';
            printf("Computer placed 'O' at (%d, %d)\n", row + 1, col + 1);
            break; 
        }
    }
}


int main() 
{
    char winner = ' ';
    Board();
    printf("Welcome to Tic Tac Toe!\n");

    while (winner == ' ') {
        displayBoard();
        computerMove();  
        winner = checkGameState();
        if (winner != ' ') break;

        displayBoard();
        playerMove();  
        winner = checkGameState();
    }

    displayBoard();
    if (winner == 'X') 
    printf("Congratulations! You win!\n");
    else if (winner == 'O') 
    printf("Computer wins. Better luck next time!\n");
    else 
    printf("It's a draw!\n");

    return 0;
}