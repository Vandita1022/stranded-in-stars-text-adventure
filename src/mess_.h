#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

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


int buy(mess *arr1, int *arr2, int *arr3)
{
    printf("Enter the serial number of food item that you would like to buy: ");
    int snum, quantity;
    scanf("%d", &snum);
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

void print_bank(int* arr)
{
    printf("%-5s %-5s %-5s \n", "Diamond ", "Gold", "Silver");
    printf("%-5d    %-5d  %-5d \n", arr[0], arr[1], arr[2]);
}

void print_nutrient(int* arr)
{
    int array[4] = {120, 180, 110, 150};
    printf("%-5s %-5s %-5s %-5s %-5s  \n", "           ", "vit  ", "   Pro", "   Carb", "  Cal");
    printf("%-10s  %-5d    %-5d  %-5d  %-5d \n", "Required", array[0], array[1], array[2], array[3]);
    printf("%-10s  %-5d    %-5d  %-5d  %-5d \n", "Your", arr[0], arr[1], arr[2], arr[3]);
    if(arr[0]>=array[0] && arr[1]>=array[1] && arr[2]>=array[2] && arr[3]>=array[3])
    {
        printf("Nutrient requirement completed!!");
        printf("\n");
    }
}

int main(void)
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

    print_table(arr);
    printf("\n");
    int money[3];
    money[0]=10;
    money[1]=10;
    money[2]=50;

    int nutrient[4];
    nutrient[0]=0;//vit
    nutrient[1]=0;//pro
    nutrient[2]=0;//carb
    nutrient[3]=0;//cal

    print_bank(money);
    printf("\n");
    print_nutrient(nutrient);
    printf("\n");

    buy(arr, money, nutrient);
    system("cls");
    print_table(arr);
    printf("\n\n\n");
    printf("Bank:\n");
    print_bank(money);
    printf("\n");
    print_nutrient(nutrient);

    
}