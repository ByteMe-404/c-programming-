#include <stdio.h>
int main(){

    int n ;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i*2);
        sum+=i*2;
    }
    printf("\n%d",sum);
    

    return 0;
}