/*
1. Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal
*/


/*
Author    : Rian
Created on: 2025-01-15    
      time: 18:07:15
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
    int number_1 ;
    int number_2 ;
    scanf("%d",&number_1);
    scanf("%d",&number_2);
    (number_1==number_2) ? printf("equal") : printf("not equal");
    
    return 0;
}