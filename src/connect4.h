#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 6
#define COLS 7
char board[ROWS][COLS];
void createboard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
}
void displayboard() {
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("|");
        for (int j = 0; j < COLS; j++) {
            printf("_%c_|", board[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    printf("  1   2   3   4   5   6   7\n");
}
bool dropToken(int col, char player) {
    
    if (col < 0 || col >= COLS) {
       
        return false;
    }
    for (int i = ROWS - 1; i >= 0; i--) {
        if (board[i][col] == ' ') {
            board[i][col] = player;
            return true;
        }
    }
    printf("Column %d is full. Please choose another column.\n", col + 1);
    return false;
}
bool check(char player) {
    //horizontal
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i][j+1] == player && board[i][j+2] == player && board[i][j+3] == player)
                return true;
        }
    }
    //vertical
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS - 3; i++) {
            if (board[i][j] == player && board[i+1][j] == player && board[i+2][j] == player && board[i+3][j] == player)
                return true;
        }
    }
    //diagonal1
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i+1][j+1] == player && board[i+2][j+2] == player && board[i+3][j+3] == player)
                return true;
        }
    }
    //diagonal2
    for (int i = 3; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i-1][j+1] == player && board[i-2][j+2] == player && board[i-3][j+3] == player)
                return true;
        }
    }
    return false;
}
void computer(char player) {
    int col;
    while (!dropToken(col, player))
    {
        col = rand() % COLS;
    }
}
int connect4() {
    srand(time(NULL));
    char x = 'X';
    createboard();
    displayboard();
    int moves=0;
    while (1) {
        int col;
        printf("Your turn. Enter column number (1-7): ");
        scanf("%d", &col);
        col--;
        moves++;
        if (dropToken(col, x)) {
            displayboard();
            //system("cls");
            if (check(x)) {
                printf("Congratulations! You win!\n");
               // break;
               return 1;
            }
            printf("Computer's turn...\n");
            computer('O');
            displayboard();
            if (check('O')) {
                printf("Computer wins!\n");
                //break;
                return 0;
            }
        }
    }
    printf("Moves: %d\n",moves);
    int points_c4;
    if(moves==4) points_c4=10;
    else if(moves==5) points_c4=9;
    else if(moves==6) points_c4=7;
    else if(moves==7) points_c4=5;
    else if(moves==8) points_c4=3;
    else  points_c4=2;
    printf("Points_c4: %d\n",points_c4);


return 0;
}