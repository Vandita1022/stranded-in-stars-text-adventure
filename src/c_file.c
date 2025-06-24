#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


#include "anagram.h"
#include "frescorers.h"
#include "sliding.h"
#include "maze.h"
#include "battleship.h"
#include "biochem.h"
#include "mathquiz.h"
#include "trivia.h"
#include "riddle.h"
#include "hangman.h"
#include "medbay.h"
#include "RPSLSp.h"
#include "encodedecode.h"
#include "blackjack.h"
#include "connect4.h"
#include "conclusion.h"


int intro() {
    
    char stickFigure[] =
        "    O\n"
        "   /|\\\n"
        "   / \\\n";


    char objects[] =
        "    .     *     .       .  *  .     *   .\n"
        "  .       .    *     .      .        .  *\n"
        "     *       .      *    .     *     .   \n"
        "    .     *     .  O     .  *  .    *   .\n"
        "  .       .    *  /|\\  .      .     .  *\n"
        "     *       .    / \\ *    .     *     .\n"
        "    .     *     .       .  *  .     *   .\n"
        "  .       .    *     .      .        .  *\n"
        "     *       .      *    .     *     .   \n";

   
    system("cls");

    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s\n", objects);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Sleep(1000);

   
    system("cls");

     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
     printf("%s\n", stickFigure);
     printf("\033[38;2;200;162;200m"); // Purple lilac color
     printf("S T R A N D E D      I N       S T A R S\n");
     printf("\033[0m");
   
    printf("\n\n\n\n\n\n\n\n\n\n\n");

    
    Sleep(2000);

    return 0;
}

typedef struct mess{
    int s_no;
    char food[50];
    int prize;
    int vit;
    int pro;
    int carb;
    int cal;


}mess;



void print_table(mess *arr)
{
    printf("%-5s %-20s %-10s %-30s\n", "S.No. ", "Food", "Price", "                Nutrient");
    printf("\n");
    printf("%-5s %-20s %-10s %-30s\n", "      ", "    ", "     ", " Vit         Pro         Carb        Cal");
    printf("\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("%-5d %-20s  %-10d  %-10d  %-10d  %-10d  %-10d\n", arr[i].s_no, arr[i].food, arr[i].prize, arr[i].vit, arr[i].pro, arr[i].carb, arr[i].cal);
    }
}

void print_map(int** arr1[])
{
    int arr[21][19];

    for(int i=0; i<21; i++)
    {
        for(int j=0; j<19; j++)
        {
            if(j==0 || j==18) printf("#");
            else if(i==0 || i==20) printf("# ");
            
            //comms
            else if((i==3)&&((j>=3)&&(j<=6)))
            {
                if(arr1[0]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            } 
            else if((i==6)&&((j>=3)&&(j<=6)))
            {
                if(arr1[0]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==2)&&(i>=4)&&(i<=6))
            {
                if(arr1[0]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            } 
            else if((j==6)&&(i>=4)&&(i<=6))
            {
                if(arr1[0]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==5 && j==3)
            {
                if(arr1[0]==0)printf("\033[0;31m C\033[0m");
                else printf("\033[0;32m C\033[0m");
            }
            else if(i==5 && j==4)
            {
                if(arr1[0]==0)printf("\033[0;31mOM\033[0m");
                else printf("\033[0;32mOM\033[0m");
            } 
            else if(i==5 && j==5)
            {
                if(arr1[0]==0)printf("\033[0;31mMS\033[0m");
                else printf("\033[0;32mMS\033[0m");
            }
            

            //mess
            else if(i==15 && ((j>=2) && (j<=5)))
            {
                if(arr1[4]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            } 
            else if(i==18 && ((j>=2) && (j<=5)))
            {
                if(arr1[4]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==1)&&(i>=16)&&(i<=18))
            {
                if(arr1[4]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            } 
            else if((j==5)&&(i>=16)&&(i<=18))
            {
                if(arr1[4]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==17 && j==3)
            {
                if(arr1[4]==0)printf("\033[0;31mME\033[0m");
                else printf("\033[0;32mME\033[0m");
            } 
            else if(i==17 && j==4)
            {
                if(arr1[4]==0)printf("\033[0;31mSS\033[0m");
                else printf("\033[0;32mSS\033[0m");
            } 
           

            //nav
            else if((i==6)&&((j>=14)&&(j<=15)))
            {
                if(arr1[2]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((i==10)&&((j>=14)&&(j<=15)))
            {
                if(arr1[2]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==13)&&(i>=7)&&(i<=10))
            {
                if(arr1[2]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if((j==15)&&(i>=7)&&(i<=10))
            {
                if(arr1[2]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==7 && j==14)
            {
                if(arr1[2]==0)printf("\033[0;31m N\033[0m");
                else printf("\033[0;32m N\033[0m");
            }
            else if(i==8 && j==14)
            {
                if(arr1[2]==0)printf("\033[0;31m A\033[0m");
                else printf("\033[0;32m A\033[0m");
            }
            else if(i==9 && j==14)
            {
                if(arr1[2]==0)printf("\033[0;31m V\033[0m");
                else printf("\033[0;32m V\033[0m");
            }

            //lounge
            else if((i==5)&&((j>=8)&&(j<=11))) printf("\033[0;36m_ \033[0m");
            else if((i==9)&&((j>=8)&&(j<=11))) printf("\033[0;36m_ \033[0m");
            else if((j==7)&&(i>=6)&&(i<=9)) printf("\033[0;36m |\033[0m");
            else if((j==11)&&(i>=6)&&(i<=9)) printf("\033[0;36m |\033[0m");
            else if(i==7 && j==8) printf("\033[0;36mLO\033[0m");
            else if(i==7 && j==9) printf("\033[0;36mUN\033[0m");
            else if(i==7 && j==10) printf("\033[0;36mGE\033[0m");

            //esc pod
            else if(i==1 && (j==17 || j==16)) printf("\033[0;33m_ \033[0m");
            else if(i==3 && (j==17 || j==16)) printf("\033[0;33m_ \033[0m");
            else if(i==17 && (j==17 || j==16)) printf("\033[0;33m_ \033[0m");
            else if(i==19 && (j==17 || j==16)) printf("\033[0;33m_ \033[0m");
            else if(j==15 && (i==2 || i==3)) printf("\033[0;33m |\033[0m");
            else if(j==15 && (i==18 || i==19)) printf("\033[0;33m |\033[0m");
            else if(i==2 && j==16) printf("\033[0;33mE1\033[0m");
            else if(i==18 && j==16) printf("\033[0;33mE2\033[0m");
            


            //engine
            else if((i==10)&&((j>=2)&&(j<=4)))
            {
                if(arr1[5]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((i==13)&&((j>=2)&&(j<=4)))
            {
                if(arr1[5]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==1)&&(i>=11)&&(i<=13))
            {
                if(arr1[5]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if((j==4)&&(i>=11)&&(i<=13))
            {
                if(arr1[5]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }          
            else if(i==12 && j==2)
            {
                if(arr1[5]==0)printf("\033[0;31m E\033[0m");
                else printf("\033[0;32m E\033[0m");
            }
            else if(i==12 && j==3)
            {
                if(arr1[5]==0)printf("\033[0;31mNG\033[0m");
                else printf("\033[0;32mNG\033[0m");
            }


            //medbay
            else if((i==11)&&((j>=8)&&(j<=9)))
            {
                if(arr1[3]==0)printf(
                    "\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((i==16)&&((j>=8)&&(j<=9)))
            {
                if(arr1[3]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==7)&&(i>=12)&&(i<=16))
            {
                if(arr1[3]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if((j==9)&&(i>=12)&&(i<=16))
            {
                if(arr1[3]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==13 && j==8)
            {
                if(arr1[3]==0)printf("\033[0;31m M\033[0m");
                else printf("\033[0;32m M\033[0m");
            }
            else if(i==14 && j==8)
            {
                if(arr1[3]==0)printf("\033[0;31m E\033[0m");
                else printf("\033[0;32m E\033[0m");
            }
            else if(i==15 && j==8)
            {
                if(arr1[3]==0)printf("\033[0;31m D\033[0m");
                else printf("\033[0;32m D\033[0m");
            }

            //cargo
            else if((i==1)&&((j>=8)&&(j<=13)))
            {
                if(arr1[1]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((i==3)&&((j>=8)&&(j<=13)))
            {
                if(arr1[1]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==7)&&(i>=2)&&(i<=3))
            {
                if(arr1[1]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if((j==13)&&(i>=2)&&(i<=3))
            {
                if(arr1[1]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==2 && j==9)
            {
                if(arr1[1]==0)printf("\033[0;31mCA\033[0m");
                else printf("\033[0;32mCA\033[0m");
            }
            else if(i==2 && j==10)
            {
                if(arr1[1]==0)printf("\033[0;31mRG\033[0m");
                else printf("\033[0;32mRG\033[0m");
            }
            else if(i==2 && j==11)
            {
                if(arr1[1]==0)printf("\033[0;31mO \033[0m");
                else printf("\033[0;32mO \033[0m");
            }
            
            //lib
            else if((i==14)&&((j>=12)&&(j<=14)))
            {
                if(arr1[6]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((i==17)&&((j>=12)&&(j<=14)))
            {
                if(arr1[6]==0)printf("\033[0;31m_ \033[0m");
                else printf("\033[0;32m_ \033[0m");
            }
            else if((j==11)&&(i>=15)&&(i<=17))
            {
                if(arr1[6]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if((j==14)&&(i>=15)&&(i<=17))
            {
                if(arr1[6]==0)printf("\033[0;31m |\033[0m");
                else printf("\033[0;32m |\033[0m");
            }
            else if(i==16 && j==12)
            {
                if(arr1[6]==0)printf("\033[0;31m L\033[0m");
                else printf("\033[0;32m L\033[0m");
            }
            else if(i==16 && j==13)
            {
                if(arr1[6]==0)printf("\033[0;31mIB\033[0m");
                else printf("\033[0;32mIB\033[0m");
            }
                else printf("  ");
        }
        printf("\n");
    }  
}



void print_bank(int* arr)
{
    COORD c;
        c.X = 85;
        c.Y = 0;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("\033[0;32mMONEY\033[0;37m");   

        c.Y = 1;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%-5s %-5s %-5s \n", "Diamond ", "Gold", "Silver"); 
        
        c.Y = 2;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%-5d    %-5d  %-5d \n", arr[0], arr[1], arr[2]);
}

void print_resources(char* arr[])
{
    COORD c;
        c.X = 85;
        c.Y = 9;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("\033[0;35mRESOURCE BAG:\033[0;37m\n");
    for(int i=0; i<7; i++)
    {
        COORD c;
        c.X = 85;
        c.Y = 10+i;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%s\n", arr[i]);
    }
}

void print_nutrient(int* arr, int* arr1)
{
    int array[4] = {120, 180, 110, 150};
    COORD c;
        c.X = 30;
        c.Y = 0;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("\033[0;33mNUTRIENTS\033[0;37m");

        c.Y = 1;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%-5s %-5s %-5s %-5s %-5s  \n", "           ", "vit  ", "   Pro", "   Carb", "  Cal");

        c.Y = 2;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%-10s  %-5d    %-5d  %-5d  %-5d \n", "Required", array[0], array[1], array[2], array[3]);

        c.Y = 3;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);    
    printf("%-10s  %-5d    %-5d  %-5d  %-5d \n\n\n", "Your", arr[0], arr[1], arr[2], arr[3]);
    if(arr[0]>=array[0] && arr[1]>=array[1] && arr[2]>=array[2] && arr[3]>=array[3])
    {
        arr1[4]=1;
        printf("Nutrient requirement completed!!");
        printf("\n");
    }
}

void print_screen(int* money, char* resource_n, int* nutrient, int* arr1)
{
    print_bank(money);
    print_resources(resource_n);
    print_nutrient(nutrient, arr1);
    print_map(arr1);
}

int buy(mess *arr1, int *arr2, int *arr3)
{
    printf("Enter the serial number of food item that you would like to buy: ");
    int snum, quantity;
    scanf("%d", &snum);
    if(snum<=0) 
    {
        buy(arr1, arr2, arr3);
    } 
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    int rate = (arr1[snum-1].prize)*quantity;
    int total_money = arr2[2] + arr2[1]*10 + arr2[0]*200;
    if(total_money<rate)
    {
        printf("Insufficient money!!");
        Sleep(1000);
    }
    // printf("\n%d", rate);
    else
    {
    if(arr2[2]>=rate)
    {
        int rem1=arr2[2]-rate;
        arr2[2]=rem1;
    }
    else
    {
        rate=rate-arr2[2];
        arr2[2]=0;
        if((arr2[1]*10)>=rate)
        {
            int rem2=(arr2[1]*10)-rate;
            int temp_rem2=rem2/10;
            arr2[1]=temp_rem2;
            temp_rem2=rem2%10;
            arr2[2]=temp_rem2;
        }
        else
        {
            rate=rate-(arr2[1]*10);
            arr2[1]=0;
            if((arr2[0]*200)>=rate)
            {
                int rem3=(arr2[0]*200)-rate;
                int temp_rem3=rem3/200;
                arr2[0]=temp_rem3;
                temp_rem3=(rem3%200)/10;
                arr2[1]=temp_rem3;
                temp_rem3=(rem3%200)%10;
                arr2[2]=temp_rem3;
            }
            else
            {
                printf("Insufficient money!!");
                Sleep(1000);
            }
        }
    }
    }
    int vit1 = (arr1[snum-1].vit)*quantity;
    int pro1 = (arr1[snum-1].pro)*quantity; 
    int carb1 = (arr1[snum-1].carb)*quantity;
    int cal1 = (arr1[snum-1].cal)*quantity;

    arr3[0] += vit1;
    arr3[1] += pro1;
    arr3[2] += carb1;
    arr3[3] += cal1;
}


void mess_loop(mess *arr, int *money, int *nutrient, int* arr1)
{
    int i=0, ent;
    while(i==0)
    {
        
        system("cls");    
        print_bank(money);
        printf("\n");
        print_nutrient(nutrient, arr1);
        printf("\n");
        print_table(arr);
        printf("\n");

        buy(arr, money, nutrient);
        system("cls");
        
        
        printf("Bank:\n");
        print_bank(money);
        printf("\n");
        print_nutrient(nutrient, arr1);
        printf("\n\n\n");
        print_table(arr);
        printf("Still hungry? Enter 0.\nOr if you are full, enter 1.\n");
        scanf("%d", &ent);
        i=ent;
    }
}

void cargoo_space(char**  resource_n, int* resource_v, int* money, int* nutrient, int* arr1)
{
    int chances=0,i=0, s_no_h;
    while(i<7)
    {
        char* human_n[20]={"1) bitcoin", "2) space rocks", "3) ancient coins", "4) energy crystals", "5) alien baby", "6) dino egg", "7) dragon scales", "8) worms", "9) headphones", "10) ostrich feather", "11) mystery", "12) mom's gajar ka halwa", "13) long-lost twin", "14) b'day cap", "15) milky bar", "16) invisibility cloak", "17) bucket", "18) adhar card", "19) blood", "20) calculator"};
        int human_v[20]={10, 30, 20, 50, 85, 65, 35, 50, 20, 75, 0, 100, 80, 15, 65, 90, 20, 95, 50, 35};
        char* human_d[20]={"A digital currency with potential for growth.", "Rare meteorites offering insights into the universe.", "Relics from the past, each with a unique story.", "Power sources sought after for their efficiency.", "A valuable discovery in the search for extraterrestrial life.", "An ancient artifact shedding light on prehistoric creatures.", "Legendary scales rumored to grant protection.", "Humble creatures vital for maintaining soil health.", "Quality sound equipment enhancing auditory experiences.", "Exotic plumes symbolizing elegance and luxury.", "An enigma waiting to be unraveled.", "A homemade delicacy evoking warmth and nostalgia.", "A cherished reunion after years of separation.", "A festive accessory bringing joy and celebration.", "Creamy delights offering moments of indulgence.", "A fantastical item fueling imagination.", "Practical tool facilitating various tasks.", "Official identification crucial for access to services.", "Life-sustaining fluid vital for medical treatments.","Precision instrument aiding in mathematical computations."};
        for(int l=0; l<20; l++)
        printf("\033[0m%s\n", human_n[l]);
        for (int i = 0; i < 100; i++)
        printf("=");
        printf("\n");
        printf("\033[0mEnter the serial number corresponding to the resource you want to pick up: ");
        scanf("%d", &s_no_h);
        for (int i = 0; i < 100; i++)
        printf("=");
        printf("\n");
        resource_n[i]=human_n[s_no_h-1];
        resource_v[i++]=human_v[s_no_h-1];
        printf("\033[0;35mitem: %s\nvalue: %d\n%s\n\033[0m", human_n[s_no_h-1], human_v[s_no_h-1], human_d[s_no_h-1]);
        for (int i = 0; i < 100; i++)
        printf("=");
        printf("\n");
        system("cls");
        printf("\033[0m");
        print_screen(money, resource_n, nutrient, arr1);

    }
    
}

int trading(char** resource_n, int *resource_v, int* money, int* nutrient, int* arr1)
{
    char* alien_n[20]={"1) patthar", "2) ped", "3) achaar", "4) laptop", "5) blowtorch", "6) mankind destruction code", "7) Dennis Richie", "8) Rudolf", "9) Spaceship fuel", "10) Holographic projector", "11) Navigation charts", "12) Time turner", "13) neural interface technology", "14) constellations chart", "15) lamborghini", "16) cute shades", "17) nani's morni", "18) Donald Trump", "19) snake(python)", "20) puppy"};
    int alien_v[20]={10, 20, 45, 10, 25, 0, 85, 85, 90, 25, 10, 95, 15, 35, 10, 15, 100, 10, 0, 75};
    int chances=0, i=0, s_no_h, s_no_a, n=20, tempo;
    char* temp;
    for(int j=0; j<7; j++)
    {
        system("cls");
        printf("\033[0m");
        print_screen(money, resource_n, nutrient, arr1);
        for(int l=0; l<20; l++)
        {
            printf("\x1b[32m%s\n", alien_n[l]);
        }
        for (int i = 0; i < 100; i++)
        printf("=");
        printf("\n");
        printf("\033[0mEnter the serial number corresponding to the resource you want to acquire to trade against %s ", resource_n[j]);
        scanf("%d", &s_no_a);
        if(alien_v[s_no_a-1]*3<=resource_v[j])
        {
            printf("\n\x1b[38;2;255;215;0mFair trade\n\n\033[0m");
            Sleep(3000);
            temp=alien_n[s_no_a-1];
            alien_n[s_no_a-1]=resource_n[j];
            resource_n[j]=temp;
            tempo=alien_v[s_no_a-1];
            alien_v[s_no_a-1]=resource_v[j];
            resource_v[j]=tempo;
            // for(int k=0; k<20; k++)
            // {
            //     alien_n[s_no_a-1+k]=alien_n[s_no_a-1+k+1];
            //     alien_v[s_no_a-1+k]=alien_v[s_no_a-1+k+1];
            // }
        }
        else if(alien_v[s_no_a-1]*3>resource_v[j])
        {
            printf("\x1b[30mUnfair trade\nOops! Looks like the universe just pulled a 'Bazinga' on you. Time to laugh it off and try again!\033[0m");
            Sleep(4000);
        }
    }
 }

int roomy(int* money, char* resource_n, int* nutrient, int* arr1)
{
    char room[25];
    //print + scan room
    system("cls");
    printf("\033[0m");
    print_screen(money, resource_n, nutrient, arr1);
    printf("\nEnter the room that you wish to visit:\n");
    scanf("%s", room);
    // *room=tolower(room);
    int a;
    if(strcmp(room,"comms")==0) a=0;    
    else if(strcmp(room,"cargo")==0) a=1;
    else if(strcmp(room,"nav")==0) a=2;
    else if(strcmp(room,"med")==0) a=3;
    else if(strcmp(room,"mess")==0) a=4;
    else if(strcmp(room,"eng")==0) a=5;
    else if(strcmp(room,"lib")==0) a=6;
    else if(strcmp(room,"lounge")==0 || strcmp(room,"quit")==0) a=7;
    else if(strcmp(room,"esc")==0) a=8;
    else {printf("Invalid input! Please try again!\n"); roomy(money, resource_n, nutrient, arr1);}
    return a;
}


void game()
{
     system("cls");

    mess arr[10]={
        {1, " Apple", 10, 100, 0, 0, 0},
        {2, " Cake", 20, 0, 0, 0, 150},
        {3, " Pizza", 50, 0, 0, 120, 0},
        {4, " Shimla mirch", 20, 80, 0, 0, 0},
        {5, " Kachori", 15, 0, 0, 0, 40},
        {6, " Kaju Katli", 50, 0, 0, 50, 0},
        {7, " Salad", 50, 0, 100, 0, 0},
        {8, " Mango Shake", 200, 20, 20, 20, 20},
        {9, " Eggs", 15, 0, 80, 0, 0},
        {10, " Milk", 20, 0, 50, 0, 0},
        
    };

    int money[3];
    money[0]=3;
    money[1]=10;
    money[2]=50;
    

    //char* human_n[7]={"1) bitcoin", "2) space rocks", "3) ancient coins", "4) energy crystals", "5) alien baby", "6) dino egg", "7) dragon scales"};
    
    int nutrient[4];
    nutrient[0]=0;//vit
    nutrient[1]=0;//pro
    nutrient[2]=0;//carb
    nutrient[3]=0;//cal
    

    int arr1[9];
    arr1[0]=0;//comms
    arr1[1]=0;//cargo
    arr1[2]=0;//nav
    arr1[3]=0;//med
    arr1[4]=0;//mess
    arr1[5]=0;//eng
    arr1[6]=0;//lib
    arr1[7]=0;//lounge
    arr1[8]=0;//esc

    char* resource_n[7]={};
    int resource_v[7]={};
   
    //intro
    intro();
    printenter("\033[1;34mStuck near Alpha Centauri,\nDesperate to return home,\nYou find yourself aboard a malfunctioning spaceship,\nFacing a daunting journey through the stars.\n\nTo repair your ship\nAnd chart a course back to Earth,\nYou must complete tasks\nWithin the ship's confines.\n\nEach room presents a challenge,\nA test of skill and wit,\nBut entry isn't free of cost:\nYou must expend precious resources.\n\nYet, with each task completed,\nYour resource bag swells,\nAnd the ship's systems inch closer to repair.\n\nBut there's more to this journey than mere survival:\nAmong the stars, you'll encounter beings unlike any you've known.\nTrade your hard-earned resources with aliens,\nForge alliances in the silent void.\n\nWith every task accomplished,\nEvery trade negotiated,\nYour points tally grows,\nDrawing you ever closer to the promise of home.\n\nIn Journey Home,\nThe greater your points,\nThe brighter the beacon guiding you through the darkness.\nWill you navigate the trials of space,\nReclaim what was lost,\nAnd find your way back to the warmth of home?\n\nThe stars await your decision.\nYour journey begins now.\n\n\nNote: You can visit the same rooms and play games multiple times in order to earn more money and increase your chances of returning to your home planet!\nOr even if you just enjoyed playing those!\n\033[0m");
    for(int i=0; i<35; i++)
    printf("\n");
    print_screen(money, resource_n, nutrient, arr1);

    printf(">>>>>");
    int a=roomy(money, resource_n, nutrient, arr1);
    switch(a)
    {
        // printf("???");
        //comms
        case_0:
        case 0:
        printenter("\n\n\033[1;34mComms Room:\n\nPrepare to enter the Comms Room,\nThe lifeline connecting you to the vast expanse of space.\nHere lies the opportunity to trade,\nTo barter your resources for potential treasures.\n\nTo enter, solve the sliding numeric puzzle,\nA test of your spatial reasoning and wit.\nSuccess rewards you with guaranteed points,\nA step closer to the warmth of home.\n\nBut beware:\nTrading is an art,\nAnd not all deals are fair.\nAttempt to trade an item of significantly lesser value,\nAnd the trade will crumble to dust.\n\nYou have but three chances to trade,\nChoose wisely,\nFor your fate hangs in the balance of cosmic commerce.\033[0m\n");
        printenter("\n\n\033[1;36mCommunications Room: Numeric Sliding Puzzle\n\nObjective: Rearrange numbers 1-8 within a 3x3 grid to establish efficient communication connections.\n\nGame Concept: Imagine you're in a futuristic control center arranging numbered tiles for optimal communication flow.\n\nGame Mechanics: Click adjacent numbers to slide them into the empty space, aiming for a 1-8 sequential arrangement.\n\nSuccess Criteria: Arrange numbers 1-8 sequentially to unlock vital communication resources.\n\nFailure Consequences: Disrupted communication pathways result from inefficient tile arrangement, leading to delays or errors.\nYou can also enter 0 in case you are bored and want to quit.\n\033[0m\n");
        
        int slide = sliding();
        if(slide!=0)
        {
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 5 GalaxyGolds!\033[0m\n\n\n\n");
            Sleep(3000);
            money[1]+=5;
        }
        if(arr1[1]==0)
        {
            printf("Looks like you haven't visited CARGO yet. In order to go ahead and trade with aliens, you must fill your resource bag! You are therefore being redirected to cargo. Hold on tight!\n\n");
            Sleep(6000);
            goto case_1;
        }
        else
        {
            trading(resource_n, resource_v, money, nutrient, arr1);
            arr1[0]=1;
        }
        int a0=roomy(money, resource_n, nutrient, arr1);
        if(a0==0) goto case_0;
        if(a0==1) goto case_1;
        if(a0==2) goto case_2;
        if(a0==3) goto case_3;
        if(a0==4) goto case_4;
        if(a0==5) goto case_5;
        if(a0==6) goto case_6;
        if(a0==7) goto case_7;
        if(a0==8) goto case_8;
        break;


        //cargo
        case_1:
        case 1:
        printenter("\n\n\033[1;34mCargo Room:\n\nWelcome to the Cargo Room,\nA treasure trove of wonders from the depths of space.\nHere, amidst the stars,\nYou'll find everything from Mummy's Gajar Halwa to long-lost twins.\n\nBut beware:\nNothing here is as it seems,\nAnd every choice carries weight.\nOut of 20 resources,\nChoose wisely:\nSelect the 7 your instincts deem most valuable.\n\nTo gain entry, face the challenges:\nA game of Connect 4,\nA battle of strategy and foresight,\nAnd riddles whispered by the great unknown.\n\nFor in space,\nEven the mundane holds mystery,\nAnd every decision shapes your journey home.\033[0m\n");
        printenter("\n\n\033[1;36mConnect 4:\n\nObjective: Be the first to connect four of your tokens (\"X\" or \"O\") in a row, horizontally, vertically, or diagonally.\nBoard Setup: The game board is a 6x7 grid, offering 42 spaces for play.\nPlayers: Engage in a game with an alien companion, taking turns to drop your tokens onto the grid.\nPlayer Turns: Drop your token into any of the seven columns, aiming for the lowest available spot.\nWinning Condition: Victory is achieved by forming a line of four tokens in a row.\nDraw Condition: If the grid fills without a winning line, the game ends in a draw.\nPoint System :\nIf you can win in...\n4 moves you get 10 points,\n5 moves you get 09 points,\n6 moves you get 07 points,\n7 moves you get 05 points,\n8 moves you get 03 points,\n>8 moves you get 2 points,\nAnd obviously if you lose..\nYou get 0 points.\033[0m\n");
        int c4=connect4();
        if(c4==1)
        {
            money[1]+=3;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 3 GalaxyGolds!\n\n\n\n\033[0m");
            Sleep(3000);
        }
        cargoo_space(resource_n, resource_v, money, nutrient, arr1);
        arr1[1]=1;
        int a1=roomy(money, resource_n, nutrient, arr1);
        if(a1==0) goto case_0;
        if(a1==1) goto case_1;
        if(a1==2) goto case_2;
        if(a1==3) goto case_3;
        if(a1==4) goto case_4;
        if(a1==5) goto case_5;
        if(a1==6) goto case_6;
        if(a1==7) goto case_7;
        if(a1==8) goto case_8;        
        break;


        //nav
        case_2:
        case 2:
        printenter("\n\n\033[1;34mNavigation Room:\n\nBefore entering the Navigation Room,\nPrepare yourself for a challenge:\nYou must decipher an encoded code\nIn the mysterious language of aliens.\n\nOnce inside, your task awaits:\nA game of Battleship,\nWhere strategy and precision will be your allies.\n\nBut beware:\nThis room holds peril,\nA trap lurking in the darkness of space.\nAn asteroid swarm threatens the ship,\nAnd a single misstep could mean certain death.\n\nNavigate the stars with caution,\nFor your journey home hangs in the balance.\n\033[0m");
        printenter("\n\n\033[1;36mNavigation Room Entry Challenge: Decoding Alien Messages\n\nObjective: Decode alien messages to unlock the Navigation Room. Your mission: decipher encoded words to reveal their Earthly counterparts.\n\nDecryption Example: lpno->moon Crack the code by recognizing patterns and logic in the alien language.\n\nYour Task: Decrypt alien words based on provided Earthly hints. Input the decoded word to progress.\n\nHow to Proceed: Analyze the hint, decode the alien word, and submit your answer for evaluation.\n\nScoring: Correct answers earn points.\n\nTrust your intuition and linguistic skills to conquer this cosmic challenge\n\033[0m");
        int encode = encodedecode();
        if(encode!=0)
        {
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 3 GalaxyGolds!\n\n\n\n\033[0m");
            Sleep(3000);
            money[1]+=3;
        }
        printenter("\n\n\n\033[1;33mNavigation Room: Asteroid Detection Challenge\n\nObjective: Safely navigate through the asteroid field by accurately detecting the hidden asteroids within a 4x4 grid.\n\nGame Concept: Imagine yourself in the midst of a cosmic battlefield, where asteroids lurk unseen. Your mission is to reveal their locations before it's too late!\n\nGame Mechanics: Utilize strategic guesses to uncover the hidden asteroids within the grid. Each correct guess brings you closer to safety.\n\nGameplay: You have a limited number of chances to reveal all asteroids. With each guess, the grid displays either a hit (asteroid found) or a miss (empty space).\n\nAsteroid Detection: Pay attention to the grid layout and any patterns that may hint at asteroid locations. Use logical deduction to pinpoint their positions accurately.\n\nSuccess Criteria: Successfully detect all asteroids within the allocated chances to navigate safely through the asteroid field.\n\nConsequences of Failure: Failure to detect all asteroids within the given chances risks collision with the asteroids, endangering your journey through space.\n\nPoints System: Your score is determined by the number of remaining chances when you successfully navigate through the asteroid field. More chances left result in a higher score, with a maximum of 10 points for completing the challenge flawlessly.\n\033[0m");
        int battle=battleship();
        Sleep(5000);
        if (battle!=0)
            {
                money[1]+=battle;
                printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", battle);
                Sleep(2000);
                arr1[2]=1;
            }
        int a2=roomy(money, resource_n, nutrient, arr1);
        if(a2==0) goto case_0;
        if(a2==1) goto case_1;
        if(a2==2) goto case_2;
        if(a2==3) goto case_3;
        if(a2==4) goto case_4;
        if(a2==5) goto case_5;
        if(a2==6) goto case_6;
        if(a2==7) goto case_7;
        if(a2==8) goto case_8;
        break;


        //med
        case_3:
        case 3:
        printf("\n\n\033[1;34mMedbay:\n\nWelcome to the Medbay,\nWhere knowledge is your key,\nAnd trivia questions pave the way.\n\nTo enter this sanctuary of healing,\nYou must wield the weapons of intellect:\nMaths, biochemistry, and more,\nFor only the wise may pass through its door.\n\nInside, two choices await:\nThe guaranteed injection,\nOr an unlabeled bottle, a mystery box of sorts,\nHolds secrets untold, a risk worth the reward.\n\nChoose your path,\nBut remember:\nIn the Medbay, knowledge is power,\nAnd every decision shapes your fate.\n\033[0m");
        Sleep(10000);
        printf("\033[1;36m");
        int math=mathquiz();
        Sleep(2000);
        if(math!=0)
        {
            money[1]+=math;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", math);
            Sleep(3000);
        }
        printf("\033[1;36m");
        int t=trivia();
        Sleep(2000);
        if(t!=0)
        {
            money[1]+=t;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", t);
            Sleep(3000);
        }
        printf("\033[1;36m");
        int bio=biochem();
        Sleep(2000);
        if(bio!=0)
        {
            money[1]+=bio;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", bio);
            Sleep(3000);
        }
        Sleep(5000);
        int meddy=medbay();
        Sleep(5000);
        printf("\n\n\x1b[38;2;255;215;0mYayy! You won a total of %d GalaxyGolds.\n\n\n\033[0m", meddy);
        Sleep(3000);
        money[1]+=meddy;
        arr1[3]=1;
        int a3=roomy(money, resource_n, nutrient, arr1);
        if(a3==0) goto case_0;
        if(a3==1) goto case_1;
        if(a3==2) goto case_2;
        if(a3==3) goto case_3;
        if(a3==4) goto case_4;
        if(a3==5) goto case_5;
        if(a3==6) goto case_6;
        if(a3==7) goto case_7;
        if(a3==8) goto case_8;
        break;


        //mess
        case_4:
        case 4:
        // printenter("\n\nMess Room:\n\nWelcome to the Mess,\nWhere even among the stars,\nHunger knows no bounds.\n\nTo enter, play Rock Paper Scissors Lizard Spock,\nWin at least once in three tries,\nAnd the doors will open wide.\n\nInside, nourishment awaits,\nBut it comes at a cost:\nGalaxy gold, Stellar silver, Diamond dust,\nEarned through your victories in space games.\n\nChoose wisely,\nFor sustenance fuels not just the body,\nBut the journey homeward.\n");
        printenter("\n\n\033[1;34mMess Room:\n\nWelcome to the Mess,\nWhere even among the stars,\nHunger knows no bounds.\n\nTo enter, play Rock Paper Scissors Lizard Spock,\nAnd the doors will open wide.\n\nInside, nourishment awaits,\nBut it comes at a cost:\nGalaxy gold, Stellar silver, Diamond dust,\nEarned through your victories in space games.\n\nChoose wisely,\nFor sustenance fuels not just the body,\nBut the journey homeward.\n\n\033[0m");
        // Sleep(20000);
        // printf("Hello, you are in mess");
        printf("\n\n\033[1;36mRock, Paper, Scissors, Lizard, Spock Game:\n\nWelcome to the Ultimate Showdown: Prepare for an epic battle of wits and strategy in the legendary game of Rock, Paper, Scissors, Lizard, Spock!\n\nThe Rules of Engagement:\nScissors cuts paper,\nPaper covers rock,\nRock crushes lizard,\nLizard poisons Spock,\nSpock smashes scissors,\nScissors decapitates lizard,\nLizard eats paper,\nPaper disproves Spock,\nSpock vaporizes rock,\nAnd as it always has, rock crushes scissors.\n\nHow to Play:\nChoose your weapon wisely by entering the corresponding number:\n1 for Rock\n2 for Paper\n3 for Scissors\n4 for Lizard\n5 for Spock\n\nThe Ultimate Showdown: After you make your choice, the computer will reveal its selection, and the winner will be determined based on the classic rules of Rock, Paper, Scissors, Lizard, Spock.\nSo, enter your choice.\n\033[0m");
        int rock=RPSLSp();
        Sleep(3000);
        if(rock!=0)
        {
            money[1]+=5;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 5 GalaxyGolds.\n\n\n\n\033[0m");
            Sleep(3000);
        }
        printf("\033[1;33m");
        mess_loop(arr, money, nutrient, arr1);
        int a4=roomy(money, resource_n, nutrient, arr1);
        if(a4==0) goto case_0;
        if(a4==1) goto case_1;
        if(a4==2) goto case_2;
        if(a4==3) goto case_3;
        if(a4==4) goto case_4;
        if(a4==5) goto case_5;
        if(a4==6) goto case_6;
        if(a4==7) goto case_7;
        if(a4==8) goto case_8;
        break;


        //eng
        case_5:
        case 5:
        printenter("\n\n\033[1;34mEngine Room:\n\nPrepare yourself for the Engine Room,\nBut first, navigate the maze at the entrance:\nA labyrinth of twists and turns,\nWhere finding the way out is your first challenge.\n\nOnce inside, the true test begins:\nA game of Blackjack with an alien opponent,\nWhere the stakes are high and the outcome uncertain.\n\nBut beware:\nLose the game,\nAnd face the consequences:\nThe alien's appetite knows no bounds,\nAnd you'll lose one precious life.\n\nProceed with caution,\nFor survival in the depths of space\nDemands both skill and luck.\n\033[0m");
        maze();
        printenter("\n\n\033[1;33mWelcome to Blackjack with an Alien! Your task in the Engine Room is to beat the alien dealer in a game of Blackjack.\n\nThe objective is simple: Beat the dealer's hand without exceeding a total card value of 21.\n\nYou'll start with two cards, facing off against the alien who reveals one of their cards.\n\nDuring your turn, choose whether to \"hit\" (take another card) or \"stand\" (stop drawing cards) strategically.\n\nRemember, you have three chances to beat the alien dealer and complete the task.\n\nThe outcome depends on the total card values. If your total exceeds the dealer's without going over 21, you win.\n\nIf the alien's total exceeds 21 or is lower than yours, you win as well. Otherwise, it's a tie.\n\nTake on the challenge and see if you can outsmart the alien to progress on your journey home.\n\033[0m");
        int black=blackj();
         if(black!=0)
            {
                arr1[5]=1;
                money[1]+=10;
                printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 10 GalaxyGolds.\n\n\n\n\033[0m");
                Sleep(3000);
            }

        
        
        int a5=roomy(money, resource_n, nutrient, arr1);
        if(a5==0) goto case_0;
        if(a5==1) goto case_1;
        if(a5==2) goto case_2;
        if(a5==3) goto case_3;
        if(a5==4) goto case_4;
        if(a5==5) goto case_5;
        if(a5==6) goto case_6;
        if(a5==7) goto case_7;
        if(a5==8) goto case_8;
        break;


        //lib
        case_6:
        case 6:
        printenter("\n\n\n\033[1;34mLibrary:\n\nWelcome to the Library's embrace,\nWhere words dance and tales take shape,\nFor LITSOC fans, a haven awaits,\nWhere literary games set minds ablaze.\n\nWithin these walls, Hangman waits,\nA test of wordsmiths, a thrilling debate,\nAnd Frescorers' game, a journey untold,\nThrough realms of stories, both new and old.\n\nBut ere you enter, a challenge calls,\nAnagrams twist, as trivia enthralls,\nEach answer a key, each puzzle a door,\nTo the treasures that lie on the library's floor.\n\nStep into this world of verse and prose,\nWhere every game, every riddle, it knows,\nFor in the Library's quiet embrace,\nA universe of wonder, a literary grace.\n\033[0m");
        printf("\033[1;36m");
        int anagame=anagram();
        if(anagame!=0)
        {
            money[1]+=anagame;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", anagame);
            Sleep(3000);
        }
        printf("\033[1;36m");
        int rid=riddle();
        if(rid!=0)
        {
            money[1]+=rid;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", rid);
            Sleep(3000);        
        }
        printf("\033[1;33m");
        int fresgame=fre();
        if(fresgame!=0)
        {
            money[1]+=fresgame;
            printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself %d GalaxyGolds.\n\n\n\n\033[0m", fresgame);
            Sleep(3000);
        }
        printf("\033[1;33m");
        printenter("\n\nNow, here is hangman\n");
        printenter("\n\nObjective: Your goal in this game is to unravel the mystery behind a hidden word by guessing the correct letters. Each correct guess brings you closer to home, while each wrong guess brings the hangman(or in this case...you) closer to peril.\n\nGameplay Overview:\nGuess a letter from the alphabet. You can only guess one letter at a time.\nIf the letter is part of the word, it will be revealed in its correct position, and your score will increase.\n\nConsequences of Wrong Guesses:\nEach incorrect guess brings the hangman one step closer to doom.\nMake six incorrect guesses, and the game is over.\n\nExiting the Game:\nFeeling overwhelmed or need to take a break? Enter '0' to gracefully exit the game at any time.\n\033[0m");
        
        int hang=hangman();
        if(hang!=0)
            {
                arr1[6]=1;
                money[1]+=10;
                printf("\n\n\x1b[38;2;255;215;0mYayy! You just won yourself 10 GalaxyGolds.\n\n\n\n\033[0m");
                Sleep(3000);
            }
        int a6=roomy(money, resource_n, nutrient, arr1);
        if(a6==0) goto case_0;
        if(a6==1) goto case_1;
        if(a6==2) goto case_2;
        if(a6==3) goto case_3;
        if(a6==4) goto case_4;
        if(a6==5) goto case_5;
        if(a6==6) goto case_6;
        if(a6==7) goto case_7;
        if(a6==8) goto case_8;
        break;


        //lounge
        case_7:
        case 7:
        printenter("\n\n\033[1;34mWelcome to the Lounge,\nThe central hub of our space journey.\nWhenever you quit a task,\nThis is where you'll find yourself.\nA place to regroup and refocus,\nBefore venturing out again.\nHere, every journey begins and ends.\n\033[0m");
        
        int a7=roomy(money, resource_n, nutrient, arr1);
        if(a7==0) goto case_0;
        if(a7==1) goto case_1;
        if(a7==2) goto case_2;
        if(a7==3) goto case_3;
        if(a7==4) goto case_4;
        if(a7==5) goto case_5;
        if(a7==6) goto case_6;
        if(a7==7) goto case_7;
        if(a7==8) goto case_8;
        break;


        //esc
        case_8:
        case 8:
        printenter("\n\n\033[1;34mAmidst the cosmic void,\nTwo escape pods stand ready,\nBeckoning with promise and uncertainty.\n\nTo Pluto they may guide,\nYet Earth's warmth remains but a dream,\nEach choice a step into the unknown.\n\nIn this vast expanse,\nChoose your path with care,\nFor destiny awaits in the stars.\n\033[0m");
        int flagg = 0;
        for(int i=0; i<9; i++)
        {
            if(arr1[i]==1)
            {
                flagg++;
            }
        }
        if(flagg<7)
        {
            printf("I don't think that you will be requiring any of your money, now that you have decided to abandon this malfunctioning spaceship. \n\nYou shall forever remain STRANDED IN STARS!\n\n");
            Sleep(7000);
            printf("\n\nIt would've been sweet if you would have completed all of the tasks successfully before deciding to give up. \nThe results totally depend upon your cowardness. \n\nThe next time you are stuck in a malfunctioning spaceship, be sure to trade some of your items for courage from the aliens.\n\n");
            Sleep(10000);
            conclusion(0);
        }
        else
        {
            int total_moneyy = money[2] + money[1]*10 + money[0]*200;
            int summ = 0;
            for(int i=0; i<7; i++)
            {
                summ+=resource_v[i];
            }
            int totall = total_moneyy + summ;
            int dia=totall/200;
            int gol=(totall-dia*200)/20;
            int sil=(totall-dia*200-gol*20);
            printf("Wow! Your current bank balance comprises of %d DiamondDusts, %d GalaxyGolds and %d StellarSilvers!\n\nIt was fun working on the spaceship with you!\n\n", dia, gol, sil);
            Sleep(10000);
            conclusion((totall/500)*8);
            //accordingly leave to planet
        }

        break;


        // default:
    }
}

int main()
{
    game();
   
// red
// green
// yellow
// blue
// magenta
// purple
// cyan
// bold
// underline
    
}