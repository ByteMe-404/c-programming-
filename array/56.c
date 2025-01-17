/*
Author    : Rian
Created on: 2025-01-16    
      time: 15:02:38
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>

int max(int a,int b){
    if(a<b)return b;
    else return a;
}

int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);

int n;
scanf("%d",&n);
int arr[n]  ;
for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}



return 0;
}