#include <stdio.h>
#include <stdlib.h>
#include <time.h>                   //for using srandtime
#include <string.h>
#include <ctype.h>                   //convert in lowercase from uppercase
#include <windows.h>

//this function for hangman if we gussed a wrong letter
void hangman_print(int a)
{
    
 switch (a) 
 {
     case 1 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |       \n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf(" /|\\      \n");
      printf("\t\t\t\t Chances Left=%d",7-a);
     break;
     
     case 2 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf(" /|\\      \n");
      printf("\t\t\t\t Chances Left=%d",7-a);
     break;
     case 3:
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |     |\n");
      printf("  |     |\n");
      printf("  |      \n");
      printf(" /|\\    \n\n");
      printf("\t\t\t\t Chances Left=%d",7-a);
      break;
      case 4 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |    \\| \n");                      //here I'm using \\ because  it  prints one(\)
      printf("  |     | \n");
      printf("  |       \n");
      printf(" /|\\     \n\n");
      printf("\t\t\t\t Chances Left=%d",7-a);
      break;
      case 5 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |    \\|/ \n");
      printf("  |     | \n");
      printf("  |       \n");
      printf(" /|\\     \n\n");
      printf("\t\t\t\t Chances Left=%d",7-a);
      break;
     case 6 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |    \\|/ \n");
      printf("  |     | \n");
      printf("  |    /  \n");
      printf(" /|\\     \n\n");
      printf("\t\t\t\t Chances Left=%d",7-a);
      break;
     case 7 :
      printf("  _______\n");
      printf("  |/    | \n");
      printf("  |     O \n");
      printf("  |    \\|/ \n");
      printf("  |     | \n");
      printf("  |    / \\ \n");
      printf(" /|\\     \n\n");
      printf("\t\t\t\t Chances Left=%d",7-a);
      printf("\n\nYOU ARE DEAD !");


      printf("\n\nGame Over !\n\n");
      printf("Total Score (out of 10): 0");
      return;          
      break;
}
}

int category(int c)
{

    char *categories[] = {"country", "animal", "fruit", "brand", "cartoon character"};
    int a=1;                       //a=body of hangman
    int rep[26]={0};              //as all letter initiliaze with zero 
  
    char *options[][6]={
        {"milkyway", "asteroid", "satellite", "telescope", "constellation", "astronaut"},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
    };

    srand(time(NULL));               //to generate a random letter or word for every different move
    int i = rand() % (6);             // divide by 6= six word in one category
    char *word=categories[c-1];       //copy word in word variable from categorie
    char *arr=options[c-1][i];        //arr=full word
    char arr2[50];                    //arr2=dash with letter
    int count = 0;                    //count=correct letter

    for(int j = 0; j < strlen(arr); j++) 
    {
        arr2[j] = '_';                          //word store in arr2
    }   
    
    system("cls");
    hangman_print(1);
    printf("\nGuess the word\n\n");
    for(int j = 0; j<strlen(arr); j++)
    {
        printf("_ ");                           //print the dash 
    }
    printf("\n");
    
    for(int v = 0; v<100; v++)
    {
        if(count==strlen(arr))
        {
            break;
        }
        
        // system("cls");
        // hangman(a, score);
        printf("\nEnter a letter: \n");
        char num;                      //num=user input letter
        scanf(" %c", &num);
        num=tolower(num);   //covert uppercase to lowercase if input in uppercase


        //for quit game in middle of game
        if(num=='0')
        {
            printf("You Quit The Game");
            return 0;
        }
        

        int flag=0;             //flag = incoorect letter
        //after every correct guess
        if(!rep[num-'a'])
        {
            for(int j = 0; j<strlen(arr); j++)
            {
                if(tolower(arr[j]==num))     //covert to lowercase
                {
                    arr2[j]=arr[j];
                    count++;
                    flag++;
                    rep[num-'a']=1;
                    system("cls");
                    hangman_print(a);
                    printf("\nYayy! you guessed it right\n");
                }
            }
            //for losing condition
            if(!rep[num-'a'])                       // num-'a' would represnt the index of alphabetes in rep array
            {
                if(flag==0)
                {
                    //if(!hintused)
                    //{
                        system("cls");
                        rep[num-'a']=1;
                        hangman_print(++a);
                        
                    //}
                    
                }
            }
            printf("\n");
            //for printing dash with letter at correct place
            for(int j = 0; j<strlen(arr); j++)


            {
                printf("%c ", arr2[j]);
            }
            printf("\n");
            //for winning condition
            
            if(count==strlen(arr))   
            {
                printf("Congratulations!!\n");
                printf("You Win The Game\n");
                // printf("%d", a);
                int score = ((float)(6-a)/6)*10;
                printf("Total Score (out of 10): %d", score);
                //break;
                return 1;
            }
        }
    }
 }

 void printenter(char *line) 
{

    printf("%s", line);
    printf("Press Enter to continue...\n");
    //getchar() reads a single ch in the string.this loop continue untill a new line generate
    while (getchar() != '\n');
    // system("cls"); // Clear the screen
}

int hangman() 
{
    printf("\t\t\t\t\t|  ------------------------------------------------------------  |\n");
    printf("\t\t\t\t\t|  *    *     *     *     *   ****    *     *     *     *     *  |\n");
    printf("\t\t\t\t\t|  *    *    *  *   * *   *   *       * * * *    *  *   * *   *  |\n");
    printf("\t\t\t\t\t|  ******   ******  *  *  *   *  **   *  *  *   ******  *  *  *  |\n");
    printf("\t\t\t\t\t|  *    *   *    *  *   * *   *   *   *     *   *    *  *   * *  |\n");
    printf("\t\t\t\t\t|  *    *   *    *  *     *    ****   *     *   *    *  *     *  |\n");
    printf("\t\t\t\t\t|  ------------------------------------------------------------  |\n\n\n");
    Sleep(3000);

    printenter("Are you ready to embark on an exciting adventure of words and wits? In this thrilling game, your goal is to unravel the mystery behind a hidden word by carefully selecting letters. But beware, each wrong guess brings the hangman one step closer to doom!\nHow to Play: \nGuess a letter from the alphabet. But remember, you can only guess one letter at a time!\nThe letter will reveal itself in its rightful place, and your score will ascend\nBut beware the consequences of folly! Each wrong guess brings the hangman closer to peril. Make six incorrect guesses, and the game is over. The hangman's fate lies in your hands!\nFeeling overwhelmed or need to take a break? No problem! Just enter '0', and you can gracefully exit the game.\nLet the guessing games begin!\n");

    int result = category(1);
    if(result==1)
    return 1;
    else
    return 0;
}