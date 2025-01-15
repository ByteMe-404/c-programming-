/*
Author    : Rian
Created on: 2025-01-05    
      time: 20:32:05
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
    for(int i = 0;i< n;i++){scanf("%d",&arr[i]);}
    int min = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min=arr[i];
        }
    }

    
    int secondsmallest = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>secondsmallest && arr[i]!=min){
            secondsmallest = arr[i];
        }
    }
    
    printf("%d",secondsmallest);
    
    return 0;
}