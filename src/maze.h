#include <stdio.h>
#include <windows.h>

// Function to display the maze
void displayMaze(char maze[7][7], int row, int col) {
    printf("\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == row && j == col)
                printf("@ ");
            else if (i == 0 && j == 6)
                printf("* ");
            else
                printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if the move is valid
int isValidMove(char maze[7][7], int row, int col, char move) {
    switch (move) {
        case 'w':
            return row - 1 >= 0 && maze[row - 1][col] != '|';
        case 's':
            return row + 1 < 7 && maze[row + 1][col] != '|';
        case 'a':
            return col - 1 >= 0 && maze[row][col - 1] != '|';
        case 'd':
            return col + 1 < 7 && maze[row][col + 1] != '|';
        default:
            return 0;
    }
}

int maze() {
    char maze[7][7] = {
        {'.', '.', '.', '.', '.', '.', '.'},
        {'|', '|', '|', '.', '|', '|', '|'},
        {'.', '.', '.', '.', '|', '.', '.'},
        {'|', '|', '.', '|', '|', '|', '|'},
        {'.', '|', '.', '.', '.', '.', '.'},
        {'.', '|', '|', '|', '|', '|', '.'},
        {'.', '.', '.', '.', '.', '.', '.'}
    };

    int row = 5; // Starting row
    int col = 0; // Starting column
    char move;

    printf("Welcome to the Maze!\n");
    int count=0;

    while (count<50) {
       
        displayMaze(maze, row, col);
        printf("Enter your move (w: up, s: down, a: left, d: right, q: quit): ");
        scanf(" %c", &move);

        if (move == 'q') {
            printf("You quit the game.\n");
            break;
        }

        if (!(move == 'w' || move == 's' || move == 'a' || move == 'd')) {
            printf("Invalid command! Please enter w, s, a, d, or q.\n");
            continue;
        }

        if (isValidMove(maze, row, col, move)) {
            switch (move) {
                case 'w':
                    row--;
                    break;
                case 's':
                    row++;
                    break;
                case 'a':
                    col--;
                    break;
                case 'd':
                    col++;
                    break;
            }
        } else {
            printf("NO more space left\n");
            Sleep(1000);
        }

        if (row == 0 && col == 6) {

            system("cls");
             for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    
                     if (i == 0 && j == 6)
                    printf("@ ");
                    else
                    printf("%c ", maze[i][j]);
                 }
                 printf("\n");
             }

              printf("Congratulations! You reached the last point!\n");
            //break;
            return 1;
        }
        system("cls");
         count++;
         if (count==50)
         {
            printf("too many moves , you cant enter");
            return 0;
         }


    } 

    return 0;
}