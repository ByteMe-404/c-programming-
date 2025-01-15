/*
Author    : Rian
Created on: 2025-01-05    
      time: 19:46:16
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


    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int s = n;

    int insert ;
    scanf("%d",&insert);
    int temp ;
    int index ;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] >insert)
        {
            index = i;
            break;
        }else{
            index = i+1;
        } 
    }


    for (int i = s; i >= index; i--)
    {
        arr[i+1]= arr[i];        
    }


    arr[index] =insert;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}