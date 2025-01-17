/*
Author    : Rian
Created on: 2025-01-16    
      time: 15:19:30
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
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int row,col;
    int target = 37;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==target){
                row = i;
                col = j;
            }
        }
    }
    printf("%d,%d",row,col);
    return 0;
}