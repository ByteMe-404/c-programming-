/*
Author    : Rian
Created on: 2025-01-05    
      time: 22:03:06
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
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int sum ;
    scanf("%d",&sum);


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                printf("%d and %d",i,j);
                break;
            }
            
        }
        
    }
    
    
    

    return 0;
}