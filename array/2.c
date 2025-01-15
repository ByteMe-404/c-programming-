/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:21:53
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

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[n-i-1]);
    }
    
    

    return 0;
}