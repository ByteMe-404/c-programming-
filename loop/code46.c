#include <stdio.h>
#include <math.h>
int main(){
    int n = 111;
    int decimal = 0 ; 
    int power = 0;
    for (int i = n; i!=0; i/=10)
    {
        int remainder = i%10;
        decimal+= remainder * pow(2,power);
        power++;
    }
    printf("%d",decimal);
    


    return 0;
}