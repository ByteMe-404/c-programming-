/*
Author    : Rian
Created on: 2025-01-16    
      time: 13:31:46
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
long long max(long long a,long long b){
    if (a<b)
    {
        return b;
    }else{
        return a ;
    }
    
}

int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
int n;
scanf("%d",&n);
int arr[n];
long long maxi = -9999999999;
for(int i = 0;i<n;i++){scanf("%d",&arr[i]);}

for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        long long product = 1;
        for (int k = i; k <= j; k++)
        {
            product*=arr[k];
        }        
        maxi =max(product,maxi);
    }
}

printf("%lld",maxi);



return 0;
}