/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:23:10
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
    int sum = 0;
    for(int i = 0;i< n;i++){scanf("%d",&arr[i]);}
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    
    return 0;
}