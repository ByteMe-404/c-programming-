// /*
// Author    : Rian
// Created on: 2025-01-16    
//       time: 09:04:20
// :)



// █████╗
// ██╔══██ 
// ██║  ╚═╝
// ██║  ██╗
// ╚█████╔╝
// ╚════
// */



// #include <stdio.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i =0;i<n;i++){scanf("%d",&arr[i]);}


//     int res = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
            
//                 if (arr[i]+arr[j]>arr[k] && arr[k]+arr[j]>arr[i] && arr[i]+arr[k]>arr[j])
                
//                     res++;
                
//         }
//     }

//     printf("%d",res);
//     return 0;
// }





#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}
    sort(arr,n);
    int count = 0;
    for (int i = n; i >= 2; i--)    
    {
        int l = 0;
        int r = i-1;
        while(l<r){
            if(arr[l]+arr[r] > arr[i])
            {
                count+=r-l;
                r--;
            }else{
                l++;
            }
        }
    }

    printf("%d",count);
        

    return 0;
}