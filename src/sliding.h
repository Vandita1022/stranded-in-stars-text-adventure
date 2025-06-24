#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print(int (*arr)[3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==-1)
            {
                printf("  ");
            }
            
            else
            {
                printf("%d ", arr[i][j]);
            }    
        }
        printf("\n");
    }
}
int slide(int (*arr)[3])
{
    int n;
    printf("Enter the number to move in the blank space: ");
    scanf("%d", &n);
    if(n==0) return 0;
    int w, x, y, z;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==-1)
            {
                w=i;
                x=j;
            }
            if(arr[i][j]==n)
            {
                y=i;
                z=j;
            }
        }
    }
    int sum_blank = w+x;
    int sum_n = y+z;
    if((sum_blank == sum_n + 1 || sum_blank == sum_n - 1) && (w==y || x==z))
    {
        arr[w][x]=n;
        arr[y][z]=-1;
    }
    else
    {
        printf("Invalid move");
        Sleep(1000);
    }
}

int checks(int (*arr)[3])
{
    int count=0;
    int temp[3][3];
    temp[0][0]=1;
    temp[0][1]=2;
    temp[0][2]=3;
    temp[1][0]=4;
    temp[1][1]=5;
    temp[1][2]=6;
    temp[2][0]=7;
    temp[2][1]=8;
    temp[2][2]=-1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==temp[i][j])
            {
                count++;
            }
        }
    }
    if(count==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sliding ()
{
    int arr[3][3];
    arr[0][0]=8;
    arr[0][1]=6;
    arr[0][2]=2;
    arr[1][0]=3;
    arr[1][1]=1;
    arr[1][2]=7;
    arr[2][0]=4;
    arr[2][1]=5;
    arr[2][2]=-1;
    int count=0;

    while(checks(arr)==0&& count<=60)
    {
        system("cls");
        print(arr);
        if(count>0)
        {
            printf("\n\nNumber of moves: %d\n\n", count);
        }
        int sss=slide(arr);
        if(sss==0) return 0;
        printf("\n\n\n");
        count++;
        if(count==60)
        {
            return 0;
        }
    }

    system("cls");
    print(arr);
    printf("\n\n\n");
    printf("Number of moves: %d", count);
    return 1;
    
    
}