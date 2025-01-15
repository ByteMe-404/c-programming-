/*
3. Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number
*/

/*
Author    : Rian
Created on: 2025-01-15    
      time: 18:12:44
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
    (n<0) ? printf("negative") : printf("positive");

    return 0;
}