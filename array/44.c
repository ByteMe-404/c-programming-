/*
Author    : Rian
Created on: 2025-01-06    
      time: 07:09:07
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
    int arr[] = {4,5,4,7,8,7,3,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < s; i++)
    {
        for (int  j = i+1; j < s; j++)
        {
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
        
    }
    

    return 0;
}