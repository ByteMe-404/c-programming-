/*
Author    : Rian
Created on: 2025-01-05    
      time: 20:26:14
:)

1   3 4 5
0 1 2 3 4 

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
    for(int i = 0;i< n;i++){scanf("%d",&arr[i]);}

    int position;
    scanf("%d",&position);

    for (int i = position; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = '\0';

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}