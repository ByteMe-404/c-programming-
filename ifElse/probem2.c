/*

2. Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer

*/
/*


Author    : Rian
Created on: 2025-01-15    
      time: 18:09:35
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
    (n%2==0) ? printf("even") : printf("odd");

    return 0;
}