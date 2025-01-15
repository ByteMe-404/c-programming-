/*
Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.
*/

/*
Author    : Rian
Created on: 2025-01-15    
      time: 18:14:10
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
    if ((n%4==0 || n%400==0) && n%100!=0)
    {
        printf("leap year");
    }else{
        printf("not leap year");
    }
    

    return 0;
}