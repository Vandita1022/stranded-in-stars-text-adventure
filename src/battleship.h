#include <stdio.h>
#include <windows.h>

// Function to display the grid with hidden and revealed cells
void display_grid(int grid[4][4], int reveal[4][4]) {
    printf("\n   1 2 3 4\n");
    for (int i = 0; i < 4; i++) {
        printf("%d  ", i + 1);
        for (int j = 0; j < 4; j++) {
            if (reveal[i][j]) {
                if (grid[i][j] == 1)
                    printf("x ");
                else
                    printf("o ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
}

int battleship() {
    
    int board[4][4] = {
        {0, 1, 0, 0},
        {0, 1, 0, 1},
        {0, 1, 0, 1},
        {0, 0, 0, 1}
    };
    int reveal[4][4] = {0}; // 0: hidden, 1: revealed
    int chances = 5;
    int row, col;

    printf("Welcome to Battleship!\n");

    while (chances > 0) {
        
        printf("\nRemaining chances: %d\n", chances);
        display_grid(board, reveal);
        printf("Enter row (1-4): ");
        scanf("%d", &row);
        printf("Enter column (1-4): ");
        scanf("%d", &col);

        row--; // Adjusting for 0-based indexing
        col--; // Adjusting for 0-based indexing

        if (row < 0 || row >= 4 || col < 0 || col >= 4) {
            printf("Invalid position! Please enter numbers between 1 and 4.\n");
            continue;
        }

        if (reveal[row][col]) {
            printf("You already guessed this position. Try another one.\n");
            continue;
        }

        if (board[row][col] == 1)// will show X 
        {
            printf("Hit!\n");
            Sleep(2000);
            system("cls");
        } else {
            printf("Miss!\n");// will show o
            Sleep(2000);
            chances--;
            system("cls");
        }
        
        reveal[row][col] = 1;

        // Check if all ships have been sunk
        int ships_remaining = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j] == 1 && !reveal[i][j])
                    ships_remaining = 1;
            }
        }

        if (!ships_remaining) {
            display_grid(board, reveal);
            printf("\n\033[0;36mCongratulations! You sunk all the ships!\033[0m\n");

            //break;
            return 1;
        }
    }
    int points;

    if (chances == 0) {
        printf("\n\033[0;31mGame over! You ran out of chances.\033[0m\n");
        
        points=0;
        return points;
    }
    else if(chances==1) points=3;
    
    else if(chances==2) points=5;
    
    else if(chances==3) points=7;
    
    else if(chances==4) points=9;
    
    else if(chances==5) points=10;
    
    //printf("Points: %d",points);
    return points;

}