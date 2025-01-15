/*
Author    : Rian
Created on: 2025-01-05    
      time: 22:08:57
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
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            if (sum>max)
            {
                max= sum;
            }
        }
    }
    
    printf("%d",max);

    return 0;
}