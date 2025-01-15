#include <stdio.h>
int main(){

    int n = 85;
    int octal = 0;
    int place = 1;

    for (int i = n; i>0; i/=8)
    {
        int remainder = i%8;
        octal+= place * remainder;
        place*=10;
    }
    printf("%d",octal);




    return 0;
}