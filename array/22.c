/*
Author    : Rian
Created on: 2025-01-05    
      time: 21:38:26
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
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("printing the matrix :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr2[i][j] = arr[j][i]  ;
        }
    }
    
    
    
    printf("printing the matrix after transpose:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    


    return 0;
}