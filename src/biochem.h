#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int biochem(void)
{
    system("cls");
    struct question
    {
        char q[200];
        char opt1[20];
        char opt2[20];
        char opt3[20];
        char ans[2];
        char wrongans[200];
    };
    struct question arr[7]={
        {"Which of these are responsible for the aurora borealis being green?", "a) nitrogen", "b) carbon dioxide", "c) oxygen", "c", "looks like you've been staring at too much grass instead of the sky.\n"},
        {"What is the colour of aurora borealis?", "a) blue", "b) purple", "c) green", "c", "'aurora borealis green, I've never seen someone lit from within' ~snow on the beach\n"},
        {"What is the name of the phenomenon where light from a star or galaxy is stretched to longer wavelengths as it passes through the expanding universe?", "a) redshift", "b) blueshift", "c) doppler effect", "a", "I honestly hope that you're not colourblind.\n"},
        {"What is the name of the process by which a star converts hydrogen into helium, releasing energy in the form of light and heat?", "a) fission", "b) fusion", "c) combustion", "b", "maybe try heating and lighting up your brain cells a bit!\n"},
        {"Which of the following organisms has been studied extensively in space to understand the effects of microgravity on biological systems?", "a) fruit flies", "b) earthworms", "c) dogs", "a", "now you know why you weren't there!\n"},
        {"Which of the following is a common problem faced by astronauts during space missions due to the redistribution of body fluids in microgravity?", "a) hypertension", "b) motion sickness", "c) osteoporosis", "b", "i mean, this was supposed to be the easy one. :/\n"},
        {"What is the name of the first dog sent into space by the Soviet Union in 1957?", "a) Fido", "b) Laika", "c) Spot", "b", "laika's on her way to bite you, she has feelings too!\n"}
    };
    printf("\n\n\x1b[1mMEDIVIA\033[0m\n\n");
    int points_bio=0, i;
    for(int j=0; j<2; j++){
    srand(time(NULL));
    i=rand() % 7;
    char user_ans[20];
    printf("\033[0m%s...\n", arr[i].q);
    printf("%s\n%s\n%s\n", arr[i].opt1, arr[i].opt2, arr[i].opt3);
    scanf("%s", user_ans);
    if(strcmp(arr[i].ans, user_ans)==0)
    {
        points_bio++;
        printf("\033[0;36m\nCorrect!\033[0m\n\n\n");
    }
    else
    {
        printf("\033[0;31mWrong! %s\n\033[0m\n\n", arr[i].wrongans);
    }
    }
    return points_bio*5;
}