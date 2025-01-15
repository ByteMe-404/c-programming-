#include <stdio.h>
int main(){

    int start = 1;
    int end = 10;
    int difference = 4;
    int sum  = 0;
    for (int i = start-1; i < end; i++)
    {
        if (i!=start-1)
        {
            printf(" + ");
        }
        int k = i*difference+1;
        printf("%d",k);
        sum+=k;
    }
    printf(" = %d",sum);
    

    return 0;
}