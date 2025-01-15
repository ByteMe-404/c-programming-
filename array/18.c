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
    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    }
    

    return 0;
}