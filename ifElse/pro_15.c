#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a ,&b, &c);
    if (a+b < c || b+c <a || a+c<b)
    {
        printf("this is not valid triangle.");
    }else{
        printf("this is a valid triangle.");
    }
    


    return 0;
}