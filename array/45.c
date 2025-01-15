/*
Author    : Rian
Created on: 2025-01-06    
      time: 07:11:37
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

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int min1=arr[0];
    int min2=arr[1];
    int msum = min1+min2;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            int sum = arr[i]+arr[j];
            if (abs(msum)>abs(sum))
            {
                msum = sum;
                min1 = arr[i];
                min2 = arr[j];
            }
                           
        }
        
    }
    

    printf("%d %d",min1,min2);


    return 0;
}