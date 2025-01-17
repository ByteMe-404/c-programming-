/*
51. Write a program in C to find the maximum circular subarray sum of a given array.
Expected Output :
The given array is : 10 8 -20 5 -3 -5 10 -13 11
The maximum circular sum in the above array is: 29

*/
/*
Author    : Rian
Created on: 2025-01-16    
      time: 08:15:03
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/

#include <stdio.h>

int min(int a,int b){
    if (a>b)return b;
    else return a;    
}

int max(int a,int b){
    if (a<b) return b;
    else return a;
    
}


int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}

    int currmax = -100000;
    long currmin = __INT_MAX__-1000;
    
    int globmax = arr[0];
    int globmin = arr[0];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        currmax = max(currmax+arr[i],arr[i]);
        currmin = min(currmin+arr[i],arr[i]);
        total+=arr[i];
        globmax = max(globmax,currmax)  ;
        globmin = min(globmin,currmin)  ;
    }

    if(globmax > 0 ){printf("%d",max(globmax,total-globmin));}
    else{printf("%d",globmax);}
 
    return 0;
}