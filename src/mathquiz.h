#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int mathquiz(void)
{
    system("cls");
    struct question
    {
        char q[200];
        char opt1[20];
        char opt2[20];
        char opt3[20];
        char ans[2];
    };
    struct question arr[7]={
        {"The sum of the first 10 terms of an arithmetic sequence is 200, and the first term is 5. What is the common difference?", "a) 4", "b) 2", "c) 3", "c"},
        {"How many permutations can be formed from the letters A, B, C, and D?", "a) 6", "b) 12", "c) 24", "c"},
        {"What is the limit of (x^2 - 1)/(x - 1) as x approaches 1?", "a) does not exist", "b) 1", "c) 0", "a"},
        {"If 3/(x-2) = 4/(x+1), what is the value of x?", "a) 6", "b) 7", "c) 8", "b"},
        {"What is the period of the function y = sin(3x)", "a) \u03C0/3", "b) 2\u03C0/3", "c) \u03C0/2", "b"}
    };

    int points_math=0, i;
    for(int j=0; j<2; j++){
    srand(time(NULL));
    i=rand() % 5;
    char user_ans[20];
    printf("\033[0m%s...\n", arr[i].q);
    printf("%s\n%s\n%s\n", arr[i].opt1, arr[i].opt2, arr[i].opt3);
    scanf("%s", user_ans);
    if(strcmp(arr[i].ans, user_ans)==0)
    {
        points_math++;
        printf("\033[0;36mYayyyy, you're good at this! :)\033[0m\n\n\n");
    }
    else
    {
        printf("\033[0;31moops, i think you got that one wrong :(\033[0m\n");
    }
    }
    return points_math*5;
}