    /*
Author    : Rian
Created on: 2025-01-16    
      time: 11:59:45
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;
}


int main(){
    int arr[] = {4,3,0,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int j = -1;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }


    for (int i = j+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
    

for(int i =0;i<n;i++){
    printf("%d ",arr[i]);
}
    
    return 0;
}