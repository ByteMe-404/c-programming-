/*
Author    : Rian
Created on: 2025-01-05    
      time: 18:43:03
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

    int arr[] = {4,3,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {4,3,5,1};
    int s2 = sizeof(arr)/sizeof(arr[0]);
    int arr3[10];

    int i = 0;
    for (i; i < s; i++){
        arr3[i] = arr[i];
    }    

    for (int j=0; j < s2; j++){
        arr3[i+j] = arr2[j];
    }


    for (int i = 0; i < s+s2; i++){
        for (int j = i+1; j < s+s2; j++){
            if (arr3[i]< arr3[j]){
                int temp = arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }   
        }
    }



    for (int i = 0; i < s+s2; i++){
        printf("%d ",arr3[i]);
    }
    
    return 0;
}