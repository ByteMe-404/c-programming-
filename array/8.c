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
    int arr[] = {4,3,3,5,7,12,2,34};
    int s = sizeof(arr)/sizeof(arr[0]);
    int frequency[100]={0};

  

    for (int i = 0; i < s; i++)
    {
  
        frequency[arr[i]]++ ;
          
    }
    


    for (int i = 0; i < 100; i++)
 {
    if(frequency[arr[i]])
    {
        printf("%d : %d\n",arr[i],frequency[arr[i]]);
        frequency[arr[i]] = 0;
    }

 }
    


    return 0;
}