/*
Author    : Rian
Created on: 2025-01-16    
      time: 13:00:15
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/

#include <stdio.h>
int max(int a,int b)
{
    if (a<b){return b;}
    else{return a;}   
}

int main(){
    freopen("input.txt","r",stdin)  ;
    freopen("output.txt","w",stdout)  ;

    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);}
        }

    int row = 0;
    int maxrow = 0;
    int maxi = arr[0][0];
    for (int i = 0; i < m; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum+=arr[i][j];
        }

        if(maxi < sum ) row = i;
        maxi = max(maxi,sum);
    }

    printf("%d",row);

    return 0;
}