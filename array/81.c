/*
Author    : Rian
Created on: 2025-01-17    
      time: 17:02:48
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
int max(int a,int b){
    return (a<b) ? b:a;
}


int maxRepeating(int arr[],int n){
    int maxi = 0;
    int maxNumber =-1;
    for(int i = 0;i< n;i++){
        int repeat = 0;
        for (int j = 0; j < n; j++)
        {
           if(arr[i]==arr[j]) repeat++; 
        }
        if (repeat>maxi){ maxNumber = i;}
    maxi = max(repeat,maxi);
    }
    return maxNumber;
}



int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);

int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
}

int res=maxRepeating(arr,n);
printf("%d",arr[res]);      

return 0;
}