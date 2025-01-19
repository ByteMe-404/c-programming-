/*
Author    : Rian
Created on: 2025-01-17    
      time: 18:28:21
:)



█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/



#include <stdio.h>
#include<stdlib.h>
int min(int a,int b){
    return (a<b) ? a:b;
}


int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);

int n;
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
int a = 7;
int b = 11;

int past_x = -1;
int past_y = -1;
int mini = 99999;
for (int i = 0; i < n; i++)
{
   if(arr[i]==a ){
        past_x = i;
        if (past_y!=-1){
            int deffer = (past_y-past_x);
            mini=min(abs(deffer),mini);
        }
   }
   else if(arr[i]==b){
    past_y = i;
    if(past_x!=-1){
        int differ  = abs(past_x-past_y);
        mini=min(differ,mini);
    }
   } 
}
printf("%d",mini);
return 0;
}