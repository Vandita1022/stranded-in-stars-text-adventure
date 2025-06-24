#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int riddle(void)
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
        {"I'm not a planet, nor am I a star,\nI'm made of ice and rock, traveling far.\nI have a tail that stretches wide,\nWhat am I called? Can you provide?", "a) asteroid", "b) meteor", "c) comet", "c", "well, I guess it's easy to mistake a comet for something as fleeting as your knowledge.\n"},
        {"I'm a giant in space, massive and bright,\nGravity so strong, not even light can take flight.\nI collapse in on myself, what am I?\nSolve my riddle, give it a try!", "a) sun", "b) earendel", "c) black hole", "c", "I guess your astronomical knowledge is as dim as a black hole. Keep looking up, maybe one day you'll spot a clue.\n"},
        {"I'm a colorful band, stretching wide,\nSeen in the sky on a dark night's ride.\nI'm made of gas and dust, a stellar sight,\nWhat am I called? Can you shed light?", "a) spectrum", "b) nebula", "c) fourier spectrum", "b", "Well, that's about as bright as a burnt-out star. Keep reaching for the cosmos, maybe someday you'll catch up with the rest of us.\n"},
        {"I'm a spacecraft exploring the unknown,\nSending back data, to Earth it's flown.\nNamed after a famous astronomer,\nWhat spacecraft am I? Make your answer sure.?", "a) hubble space telescope", "b) james web", "c) space shuttle", "a", "how quaint. It seems your knowledge of space is as outdated as your spacecraft. Better luck next time, amateur astronomer.\n"},
        {"I'm a phenomenon when stars explode,\nBrighter than galaxies, my light's bestowed.\nWhat am I called? Can you discern?", "a) stellar cannibalism", "b) supernova", "c) star fission", "b", "your answer is about as explosive as a deflated balloon. \n"},
        {"I'm a celestial event, a sight to behold,\nWhen the Earth, Sun, and Moon align, I'm told.\nDay turns to night for a moment's glance,\nWhat am I called? Take a chance.", "a) meteor shower", "b) eclipse", "c) comet sighting", "b", "how lunar-lame! Looks like your astronomical IQ is about as bright as a cloudy night.\n"},
        {"I'm a mission from India, exploring the Moon,\nWith a rover named Pragyan, I'll be there soon.\nMy name means 'moon vehicle' in Sanskrit, you see,\nWhat am I called? Can you guess me?", "a) voyager", "b) chandrayaan", "c) mars rover", "b", "looks like your knowledge of our country's space exploration is as barren as Mars itself. \n"}
    };
    printf("\n\n\x1b[1mRIDDLES\n\n");
    int points_riddle=0, i;
    for(int j=0; j<2; j++){
    srand(time(NULL));
    i=rand() % 7;
    char user_ans[20];
    printf("\033[0m%s...\n", arr[i].q);
    printf("%s\n%s\n%s\n", arr[i].opt1, arr[i].opt2, arr[i].opt3);
    scanf("%s", user_ans);
    if(strcmp(arr[i].ans, user_ans)==0)
    {
        points_riddle++;
        printf("\033[0;32mCorrect!\033[0m\n\n\n");
    }
    else
    {
        printf("\033[0;31mWrong! %s\n\n\033[0m", arr[i].wrongans);
    }
    }
    return points_riddle;
}