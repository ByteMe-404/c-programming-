/*
Author    : Rian
Created on: 2025-01-05    
      time: 19:42:32
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i]  = temp;
            }   
        }
    }
    
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}