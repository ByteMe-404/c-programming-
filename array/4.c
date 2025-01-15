/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:24:10
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
int main(){

    int arr[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i] =arr2[i];
    }
    
    return 0;
}