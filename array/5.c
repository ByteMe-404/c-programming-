/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:26:29
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
    for (int i = 0; i < n; i++) {scanf("%d",&arr[i]);}

    int duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]) {
                duplicate++;
                break;
            }
        }
    }
    

    printf("%d",duplicate);


    return 0;
}