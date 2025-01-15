/*
Author    : Rian
Created on: 2025-01-05    
      time: 21:42:04
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


    int sum = 0;
    for (int  i = 0; i < row; i++){
            for (int j = 0; j < row; j++){
                if (i==j){
                    sum+=arr[i][j];
                }   
            }    
        }
            

    return 0;
}