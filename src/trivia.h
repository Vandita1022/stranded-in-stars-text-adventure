#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int trivia(void)
{
    system("cls");
    struct question
    {
        char q[200];
        char opt1[30];
        char opt2[30];
        char opt3[30];
        char ans[2];
        char wrongans[200];
    };
    struct question arr[7]={
        {"I'm not a planet, nor am I a star,\nI'm made of ice and rock, traveling far.\nI have a tail that stretches wide,\nWhat am I called? Can you provide?", "a) asteroid", "b) meteor", "c) comet", "c", "kya tumhare saamne wali khidki me 1 moon ka tukda nahi rehta?\n"},
        {"I'm a giant in space, massive and bright,\nGravity so strong, not even light can take flight.\nI collapse in on myself, what am I?\nSolve my riddle, give it a try!", "a) sun", "b) earendel", "c) black hole", "c", "SECOND NEAREST :/\n"},
        {"I'm a colorful band, stretching wide,\nSeen in the sky on a dark night's ride.\nI'm made of gas and dust, a stellar sight,\nWhat am I called? Can you shed light?", "a) spectrum", "b) nebula", "c) fourier spectrum", "b", "i mean this was taught in second grade english :/\n"},
        {"I'm a spacecraft exploring the unknown,\nSending back data, to Earth it's flown.\nNamed after a famous astronomer,\nWhat spacecraft am I? Make your answer sure.?", "a) hubble space telescope", "b) apollo", "c) james web", "a", "did you fail middle school geography by any chance? \n"},
        {"I'm a phenomenon when stars explode,\nBrighter than galaxies, my light's bestowed.\nWhat am I called? Can you discern?", "a) explosion", "b) supernova", "c) centrifugal", "b", "Sir Newton didn't get hit by an apple on his head for you to get this wrong :/\n"},
        {"I'm a celestial event, a sight to behold,\nWhen the Earth, Sun, and Moon align, I'm told.\nDay turns to night for a moment's glance,\nWhat am I called? Take a chance.", "a) attraction", "b) gravity", "c) centrifugal", "b", "Sir Newton didn't get hit by an apple on his head for you to get this wrong :/\n"},
        {"I'm a mission from India, exploring the Moon,\nWith a rover named Pragyan, I'll be there soon.\nMy name means 'moon vehicle' in Sanskrit, you see,\nWhat am I called? Can you guess me?", "a) attraction", "b) gravity", "c) centrifugal", "b", "Sir Newton didn't get hit by an apple on his head for you to get this wrong :/\n"}
    };

    printf("\n\n\x1b[1mTRIVIA\n\n");
    int points_trivia=0, i;
    for(int j=0; j<2; j++){
    srand(time(NULL));
    i=rand() % 5;
    char user_ans[20];
    printf("\033[0m%s...\n", arr[i].q);
    printf("%s\n%s\n%s\n", arr[i].opt1, arr[i].opt2, arr[i].opt3);
    scanf("%s", user_ans);
    if(strcmp(arr[i].ans, user_ans)==0)
    {
        points_trivia++;
        printf("\033[0;36mCorrect!\033[0m\n\n\n");
    }
    else
    {
        printf("\033[0;31mWrong! %s\033[0m\n\n\n", arr[i].wrongans);
    }
    }
    return points_trivia*5;
}