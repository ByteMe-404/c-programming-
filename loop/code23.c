#include <stdio.h>
#include<math.h>
int main(){

    float n ;
    scanf("%d",&n);
    int term;
    scanf("%d",&term);
    float sum  = n;

    for (int i = 1; i <= term; i++)
    {
        sum +=pow(n,(i*2)-1);
    }
    printf("%d",sum);

    return 0;
}


