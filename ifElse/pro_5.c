//5.Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.


#include<stdio.h>
int main(){


    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible");
    }else{
        printf("you are not eligible");

    }


    return 0;
}
