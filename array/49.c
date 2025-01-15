/*
Author    : Rian
Created on: 2025-01-06    
      time: 16:29:35
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

    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i< n;i++){scanf("%d",&arr[i]);}


    int major=0;
    int index ;
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                freq++;
            }
        }
        if (freq > major)
        {
            major = freq;
            index = i;
        }
        
    }
    
    printf("%d",arr[index]);


    return 0;
}