#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int ana();
void shuffleString(char *str);
int RoundNo=1, points_ana=0; char wordg[20], wordj[20];

void Rules()
{
    printf("\nThe rules are pretty easy to understand.\n->A set of letters will appear on your screen. You just have to guess the correct word that can be made by rearranging these letters.\n->If at any point you're bored and want to quit, just type 'QUIT' instead of the word. \n->And most important of all, don't forget to have fun! :)\nAll the best!\n\n\033[0m"); //green
    return; 
}

void shuffleString(char *str) 
{
    int length = strlen(str);
    srand(time(NULL));
    for (int i = length - 1; i > 0; i--) 
    {
        int j = rand() % (i + 1);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

struct words
{
    char word[25];
};

struct words w[21]={"galaxy", "comet", "asteroid", "gravity", "universe", "nebula", "aurora", "rover", "matrix", "stars", "rocket", "alien", "orbit", "nova", "titan", "apollo", "orion", "zenith", "nexus", "saturn", "crater"};

int ana()
{
    
    if(RoundNo==1)
    printf("\nOkay, let's start!\n"); 
    char random_word[25];
    if(RoundNo==4)
    {
        RoundNo=1;
        printf("\033[0mI hope you enjoyed the game! :)\nYou got %d guesses right!\n\n\033[0m", points_ana); 
        return (points_ana*10)/3;
    }
    srand(time(NULL));
    int random_index = rand() % 20;
    {
        strcpy(random_word, w[random_index].word);
        strcpy(wordj, w[random_index].word);
    }
    shuffleString(wordj);
    printf("\033[0mHere is the jumbled word: %s.\nWhat's your guess?\n->", wordj);
    for(int i=0; i<2; i++)
    {
        scanf("%s", wordg);
        if(strcmp(random_word, wordg)==0)
        {
            printf("\033[0;36mYay! Well Done!\n\n\033[0m"); 
            points_ana++; 
           // break;
           return 1;
        }
        // else if(strcmp(wordg, "QUIT")==0)
        // {
        //     RoundNo=1;
        //     printf("\033[0mI hope you had fun for a while.\nYou got %d guesses right!\nGood-bye!\n", points); 
        //     return;
        // }
        else 
        {
            printf("\033[0;31m");//red
            if(i==1) 
            {printf("\033[0;31mINCORRECT!\nThe correct word was: %s. \nBetter luck next time :)\n\n\033[0m", random_word);
            return 0;}
            else 
            printf("\033[0;31mINCORRECT! Try again :)\n"); 
            printf("\033[0m");
        }
    }
    RoundNo++;
    ana();
}

int anagram()
{
    printf("\n\nHello!\nWelcome to \033[0;33m 'Scramble Saga' \033[1;36m!\nUnscramble the jumbled letters to form meaningful words and navigate through this linguistic labyrinth.\nI hope you are ready to embark on this thrilling word adventure!\n\n");
    Rules();
    ana();
}
