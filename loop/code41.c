#include <stdio.h>
int main(){

    int n = 85;
    int binary = 0;
    int place = 1;

    for (int i = n; i>0; i/=2)
    {
        int remainder = i%2;
        binary+= place * remainder;
        place*=10;
    }
    printf("%d",binary);




    return 0;
}