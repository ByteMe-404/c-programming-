//1. Write a C program to accept two integers and check whether they are equal or not. 



#include <stdio.h>
int main(){


    int a,b;
    scanf("%d %d",&a,&b);
    if(a!=b){
        printf("not equal.");
    }else{
        printf("is equal");
    }

    return 0;
}

