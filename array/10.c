/*
Author    : Rian
Created on: 2025-01-05    
      time: 19:33:56
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
    int odd[n];
    int even[n];
    int oddIndex = 0;
    int evenIndex = 0;
    for(int i = 0;i< n;i++){
        
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            even[evenIndex++] = arr[i];
        }else{
            odd[oddIndex++] = arr[i];
        }
    }
    
    
    for (int i = 0; i <oddIndex ; i++){
        printf("%d ",odd[i]);
    }

        

    return 0;
}