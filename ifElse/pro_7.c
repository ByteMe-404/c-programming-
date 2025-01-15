//7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.


#include<stdio.h>
int main(){
    int height;
    scanf("%d",&height);
    if(height<165){
        printf("short");
    }else if(height>=165 && height <=178){
        printf("average");
    }
    else if(height>=179 && height <=188){
        printf("tall");
    }
    else if(height>=189){
        printf("very tall");
    }
    return 0;
}
