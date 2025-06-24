//bonus games med bay
#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
int coinTossGame()
{
    system("cls");
    srand(time(NULL));
    printf("\nCoin Toss Game:\n");
    printf("Enter your choice (heads (h) or tails (t)): ");
    char choice[10];
    scanf("%s", choice);
    if((strcmp(choice, "h") != 0)&& (strcmp(choice, "t") != 0)&& (strcmp(choice, "H") != 0)&& (strcmp(choice, "T") != 0))
    {
        while((strcmp(choice, "h") != 0)&& (strcmp(choice, "t") != 0)&& (strcmp(choice, "H") != 0)&& (strcmp(choice, "T") != 0)) 
        {
           printf("Invalid input! Try Again: ");// validating input
           scanf("%s", choice);
        }
    }
    int coin = rand() % 2;// random numbers for heads or tail
    printf("Coin toss result: %s\n", coin == 0 ? "Tails" : "Heads");
    if ((coin == 0 && strcmp(choice, "t") == 0) || (coin == 0 && strcmp(choice, "T") == 0)|| (coin == 1 && strcmp(choice, "h") == 0) || (coin == 1 && strcmp(choice, "H") == 0)) 
    {
        printf("Congratulations! You won the coin toss!\n");
        return 1;
    }
    else 
    {
        printf("Sorry, you lost the coin toss!\n");
        return 0;
    }
}


int dieNumberGuessingGame()
{
    system("cls");
    printf("\nDie Number Guessing Game:\n");
    printf("Guess a number between 1 and 6: ");
    int guess;
    scanf("%d", &guess);
    if(guess<1 || guess>6)
    {
        while(guess<1 || guess>6)
        {
            printf("Invalid input! Try again: ");
            scanf("%d", &guess); 
        }
    }
    int die = rand() % 6 + 1;
    printf("Die roll result: %d\n", die);
    if (guess == die) 
    { 
        printf("Congratulations! You guessed correctly.\n");
        return 1;
    }
    else 
    {
        printf("Sorry, the correct number was %d.\n", die);
        return 0;
    }
}
int highLowGame() 
{
    system("cls");
    int card, guess, nextcard,correct = 0;
    char choice;
    srand(time(NULL)); // Seed random number generator
    printf("\nWelcome to the High or Low game!\n");
    printf("Guess if the next card will be higher or lower than the current card.\n");
    int i=0;
    do 
    {
        card = rand() % 13 + 1; 
        printf("Current card: %d\n", card);
        printf("Will the next card be higher (h) or lower (l)? ");
        scanf(" %c", &choice);
        nextcard = rand() % 13 + 1;
        printf("Next card: %d\n", nextcard);
        if ((choice == 'h' && nextcard >= card) || (choice == 'l' && nextcard <= card)) 
        { 
            printf("Correct!\n\n\n"); 
            correct++;
        } 
        else 
        {
            printf("Incorrect!\n\n\n");
        }
        i++;
    } while (i<3);

    printf("\nGame over!\n");
    printf("Total guesses: %d\n", i);
    printf("Correct guesses: %d\n", correct);
    printf("Accuracy: %.2f%%\n", (float)correct / i* 100);// calculating accuracy
    
    Sleep(3000);
    return correct+2;
}



#include <stdio.h>
#include <stdlib.h>

void displayChoices() {
    printf("\n");
    printf("Choose one of the following:\n");
    printf("1. Injection\n");
    printf("     _________\n");
    printf("    |    |    |\n");
    printf("    |   _|_   |\n");
    printf("    |  |   |  |\n");
    printf("    |  |   |  |\n");
    printf("    |  |_ _|  |\n");
    printf("    |   | |   |\n");
    printf("    |   |_|   |\n");
    printf("    |_________|\n\n");
    printf("2. Unlabelled Bottle\n");

    printf("       |_____|\n");
    printf("       |_____|\n");
    printf("      /       \\\n");
    printf("     /         \\\n");
    printf("    /           \\\n");
    printf("   /             \\\n");
    printf("  /_______________\\\n");
    printf("  |               |\n");
    printf("  |               |\n");
    printf("  |  [UNLABELLED] |\n");
    printf("  |               |\n");
    printf("  |_______________|\n");
    printf("  |               |\n");
    printf("  |_______________|\n\n");
    


}

int medbay(void) 
{
    
    int choice;
    int pp=0;
    displayChoices();
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch(choice) 
    {
        case 1:
            printf("\nYou chose the gurantee injection.\nYou get to play bonus games to increase your points,\nSo that you can buy food and reach your nutritional requirements.\n ");
            Sleep(40000);
            
            if(coinTossGame()==1)
            {
                printf("You get 5 GalaxyGold");
                Sleep(2000);
                pp+=5;
            }
            else
            {
                printf("You get nothing!");
                Sleep(2000);
            }
            
            if(dieNumberGuessingGame()==1)
            {
                printf("You get 5 GalaxyGold");
                Sleep(2000);
                pp+=5;
            }
             else
            {
                printf("You get nothing!");
                Sleep(2000);
            }
            
            int hlg1=highLowGame();
            printf("You get %d GalaxyGold \n", hlg1);
            //add it to the money
            pp+=hlg1;

            break;


            case 2:
            printf("\nYou chose the unlabeled bottle.\nYou get to play bonus games to increase your points,\nSo that you can buy food and reach your nutritional requirements.\n\nYou are a risk taker, and shall be awarded\nYou get a reward of 1 DiaomanDust worth of GalaxyGolds.\n");
            Sleep(10000);
            if(coinTossGame()==1)
            {
                printf("You get 5 GalaxyGold");
                Sleep(2000);
                pp+=5;
            }
            else
            {
                printf("You get nothing!");
                Sleep(2000);
            }
            
            if(dieNumberGuessingGame()==1)
            {
                printf("You get 5 GalaxyGold");
                Sleep(2000);
                pp+=5;
            }
             else
            {
                printf("You get nothing!");
                Sleep(2000);
            }
            int hlg2=highLowGame();
            printf("You get %d GalaxyGold \n", hlg2);
            Sleep(2000);
            pp+=hlg2;
            
            break;

            default:
            printf("Invalid choice.\n");
            break;
    }
    
    return pp+20;
}

