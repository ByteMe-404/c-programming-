/*
Author    : Rian
Created on: 2025-01-05    
      time: 21:06:41
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
#define row 2

int main(){
    int arr[row][row];
    int arr2[row][row];
    int arr3[row][row];
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr3[i][j]= arr[i][j]-arr2[i][j];
        }   
    }

    printf("addition of two matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}