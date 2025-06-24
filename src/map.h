#include <stdio.h>

void print_map(int* arr1[])
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
                if(arr1[3]==0)printf("\033[0;31m_ \033[0m");
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

int map(void)
{
    // int arr[21][19];
    int arr1[9];
    arr1[0]=0;//comms
    arr1[1]=0;//cargo
    arr1[2]=0;//nav
    arr1[3]=0;//med
    arr1[4]=0;//mess
    arr1[5]=0;//eng
    arr1[6]=2;//lib
    arr1[7]=2;//lounge
    arr1[8]=3;//esc
    print_map(arr1);
}