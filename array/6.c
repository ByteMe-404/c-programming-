/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:31:12
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
    int arr[] = {4,3,3,5,7,12,2,34,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        int count = 0;
        for (int j = 0; j < s; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }

        if (count==1)
        {
            printf("%d ",arr[i]);
        }
        
    }
    

    return 0;
}