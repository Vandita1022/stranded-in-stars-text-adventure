#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int fre();
int RoundNof=1, pointsf=0;

void Rulesf()
{
    printf("FRESCORERS\n\n\nThe rules are pretty easy to understand.\n\n->There will be 5 rounds.\n->In each round, a word will appear on your screen with three blank spaces.\n->You have to correctly guess which letters can fill these gaps in order to make 2 meaningful words by including them in both.\n->For example: FRE___RERS, here the letters will be SCO as Fresco is a word and scorers is a word too.\n->Note that one word will end with these 3 letters and the other will start with them.\nOkay then, let's start!\nYour first word is:\n\n\033[0m"); 
    Sleep(10000);
    return; 
}

int fres(void)
{
    printf("\033[1;36m");
    Rulesf();
    fre();
} 

struct frescorer
{
    char q[20]; 
    char a[5];
};

struct frescorer f[12]={{"co___al", "met"}, {"stel___va", "lar"}, {"anci___rance", "ent"}, {"or___osphere", "ion"}, {"agh___eroid", "ast"}, {"supern___l", "ova"}, {"cos___rowave", "mic"}, {"anc___izon", "hor"}, {"pla___work", "net"}, {"doc___rential", "tor"}, {"aur___cle", "ora"}, {"m___enic", "ars"}};

int fre()
{
    char p[30];
    if(RoundNof==4)
    {
        RoundNof=1;
        printf("Your points for this round are: %d\n\n", pointsf); 
        return (pointsf*10)/3;
    }
    srand(time(NULL));
    int random_index = rand() % 12;
    char random_word[20], guess[5], ans[5];
    strcpy(random_word, f[random_index].q);
    strcpy(ans, f[random_index].a);
    printf("Round %d\n%s\n->", RoundNof, random_word);
    scanf("%s", guess);
    if(strcmp(guess, ans)==0)
    {
        printf("\033[0;36mYay! Well Done!\n\n\033[0m"); //cyan
        pointsf++; 
        return 1;
    }
    // else if(strcmp(guess, "QUIT")==0)
    // {
    //     RoundNo=1;
    //     printf("\033[0mI hope you had fun for a while.\nYour points for this round are: %d. \nGood-bye!\n\n", points); 
    //     return;
    // }
    else {
        printf("\033[0;31mINCORRECT! Better luck next time :)\n\n\033[0m");// red
        return 0;
    }
    RoundNof++;
    fre();
}