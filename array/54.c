/*
54. Write a program in C to sort an array of 0s, 1s and 2s.
Expected Output :
The given array is : 0 1 2 2 1 0 0 2 0 1 1 0
After sortig the elements in the array are:
0 0 0 0 0 1 1 1 1 2 2 2
*/
/*
Author    : Rian
Created on: 2025-01-16    
      time: 08:58:26
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
    int zero = 0;
    int one = 0;
    int two = 0;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }

    int index =0 ;
    for(int i =0;i<zero;i++){
        arr[index++]=0;
    }
    for(int i =0;i<one;i++){
        arr[index++]=1;
    }
    for(int i =0;i<two;i++){
        arr[index++]=2;
    }



    return 0;
}