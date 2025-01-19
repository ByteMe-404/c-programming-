/*
Author    : Rian
Created on: 2025-01-17    
      time: 17:13:17
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
void solve(int arr[],int n,int differ){
    for(int i = 0;i<n;i++){
        int compliment = differ+arr[i];
        for(int j = i+1;j<n;j++){
            if(arr[j]==compliment) printf("%d,%d",arr[i],arr[j]);
        }
    }
}


int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);

int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}
solve(arr,n,53);



return 0;
}