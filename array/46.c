/*
Author    : Rian
Created on: 2025-01-06    
      time: 07:31:17
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
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        int found = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]==i+1 && arr[j]>=0)
            {
                smallest=arr[i];
                found=0;
            }
        }
        if (found){
            printf("%d",i+1);
            break;
        }                
    }
    return 0;
}