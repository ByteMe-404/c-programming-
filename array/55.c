/*
Author    : Rian
Created on: 2025-01-16    
      time: 11:11:03
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/





#include <stdio.h>

void printarr(int arr[],int n){
    for(int i =0;i<n;i++){printf("%d ",arr[i]);}
}


int main(){
    int n;
    int m;
    int hash[100]={0};
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }



    scanf("%d",&m);
    int subset[m];
    for (int i = 0; i < m; i++){
        scanf("%d",&subset[i]);
        hash[arr[i]]++;
}

    int sub = 1;
    for (int i = 0; i < m; i++)
    {
        if (hash[subset[i]]!=2)
        {
            sub = 0;
        }
    }
    if (sub)
    {
        printf("subset");
    }else{
        printf("not subset");
    }


    return 0;
}