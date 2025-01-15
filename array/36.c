/*
Author    : Rian
Created on: 2025-01-05    
      time: 22:19:56
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
    int total = 0;
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }


    int s = n+1;
    int sum = (s*(s+1))/2;
    printf("%d",sum-total);

    return 0;
}