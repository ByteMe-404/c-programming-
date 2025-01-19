/*
Author    : Rian
Created on: 2025-01-17    
      time: 16:49:08
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
#include <stdlib.h>
int solve(int arr[],int n,int differ){
    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]-arr[j] ==differ|| arr[i]-arr[j]== -differ) 
            printf("%d,%d\n",arr[i],arr[j]);
        }
    }
    
}


int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
int n ;
scanf("%d",&n);
int arr[n];
for(int i= 0 ;i< n;i++){scanf("%d",&arr[i]);}
solve(arr,n,5);
return 0;
}