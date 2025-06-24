#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int encodedecode(void)
{
    system("cls");
    struct question
    {
        char ans[20];
        char q[20];
    };
    
    struct question arr[5]={
        {"pluto", "omtun"},
        {"space", "rqzdd"},
        {"nebula", "mfavkb"},
        {"titan", "sjsbm"},
        {"twinkle", "sxhojmd"}
    };

    int points_encode=0, i;
    srand(time(NULL));
    i=rand() % 5;
    char user_ans[20];
    printf("lpno->moon\n");
    printf("%s->?\n", arr[i].q);
    scanf("%s", user_ans);
    if(strcmp(arr[i].ans, user_ans)==0)
    {
        points_encode++;
        printf("Correct\n");
        return 1;
    }
    else
    {
        printf("Incorrect\n");
        return 0;
    }
}