#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int gen()
{
    int random;
    random= rand() % 5 + 1 ; 
    return random;
}
int winner(int choice, int comp)
{
    if (choice == comp)
    {
        printf("It's a tie!\n");
        return 1;
    }
    else if ((choice == 1 && (comp == 3 || comp == 4)) ||
             (choice == 2 && (comp == 1 || comp == 5)) ||
             (choice == 3 && (comp == 2 || comp == 4)) ||
             (choice == 4 && (comp == 2 || comp == 5)) ||
             (choice == 5 && (comp == 1 || comp == 3)))
    {
        printf("\033[0;36mYayyy!!You win!\033[0m\n");
        return 1;
    }
    else
    {
        printf("\033[0;31mOopss!!Computer wins!\033[0m\n");
        return 0;
    }
}
int RPSLSp()
{ 
    srand(time(NULL));
    int choice, comp;
    // printf("If you are a fellow TBBT fan this is for you!\n");
    // printf("Welcome to Rock, Paper, Scissors, Lizard, Spock!\n");
    // printf("The rule are as follows:\n");
    // printf("Scissors cuts paper,\n paper covers rock,\n rock crushes lizard,\n lizard poisons Spock,\n Spock smashes scissors,\n scissors decapitates lizard,\n lizard eats paper,\n paper disproves Spock,\n Spock vaporizes rock,\n and as it always has,\n rock crushes scissors.\n");
    // printf("Enter your choice \n (1 for Rock,\n 2 for Paper,\n 3 for Scissors,\n 4 for Lizard,\n 5 for Spock): ");
    scanf("%d", &choice);
    if (choice < 1|| choice > 5)
    {
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
        return 1;
    }
    comp = gen();
    printf("Your choice: ");
    switch (choice)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
        case 4:
            printf("Lizard\n");
            break;
        case 5:
            printf("Spock\n");
            break;
    }
    printf("Computer's choice: ");
    switch (comp)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
        case 4:
            printf("Lizard\n");
            break;
        case 5:
            printf("Spock\n");
            break;
    }
    int resultr = winner(choice, comp);
    if(resultr==1)
    {
        return 1;
    }
    else{
        return 0;
    }
   
}