/*
Author    : Rian
Created on: 2025-01-17    
      time: 17:22:02
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
int max(int a,int b){
    return (a>b) ? b:a;
}

int solve(int arr[],int n,int first,int second){
    int indexHld[n];
    int index =  0;
    int mini = 9999;
    for(int i =0;i<n;i++){indexHld[i]=0;}
    for(int i = 0;i<n;i++){
        if(arr[i]==first)indexHld[index++] = i+1;
        if(arr[i]==second)indexHld[index++] =i+1;
    }
    for (int i = 0; i < index; i++) {
        for (int j = i+1; j < index; j++){
            int com = abs(indexHld[i]-indexHld[j]);
            mini = max(com,mini);
            }
    }
return mini;
}

int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}
printf("%d",solve(arr,n,7,11));
return 0;
}