/*
Author    : Rian
Created on: 2025-01-05    
      time: 21:51:35
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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&arr[i][j]);
        }   
    }


    for (int i = 0; i < row; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < row; j++)
        {
            rowsum+=arr[i][j];
        }   
        printf("row :%d\n",rowsum);
    }
    for (int i = 0; i < row; i++)
    {
        int colsum = 0;
        for (int j = 0; j < row; j++)
        {
            colsum+=arr[j][i];
        }   
        printf("col :%d\n",colsum);
    }

    


    return 0;
}