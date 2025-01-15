/*
Author    : Rian
Created on: 2025-01-06    
      time: 18:01:22
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
    int arr[5]={1,2,4,3,-7};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {

            int sum = 0;
            for (int k = i; k < 5; k++)
            {
                sum+=arr[k];
            }
            if (sum==0)
            {
                printf("%d ",arr[j]);
            }
            
            
        }
        
    }
    


    return 0;
}