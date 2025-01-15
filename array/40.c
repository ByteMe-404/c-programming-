/*
Author    : Rian
Created on: 2025-01-06    
      time: 06:55:27
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
    int insert ;
    scanf("%d",&insert);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=insert){
        printf("%d",arr[i]);
        break;
        }
    }
    

    return 0;
}