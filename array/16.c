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
    int max = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] > max)
        {
            max=arr[i];
        }
    }

    int secondlarge = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>secondlarge && arr[i]!=max){
            secondlarge = arr[i];
        }
    }
    
    printf("%d",secondlarge);
    
    return 0;
}