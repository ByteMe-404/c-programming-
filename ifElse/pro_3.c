//3. Write a C program to check whether a given number is positive or negative.


#include <stdio.h>
int main(){

    int a ;
    scanf("%d",&a);
    if(a<0){
        printf("%d is a negative number .",a);
    }else{
        printf("%d is a positive number .",a);
    }
    return 0;
}
