#include <stdio.h>
int main(){
    int sum = 0;
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i*2 - 1);
        sum+=i*2-1;
    }

    printf("\n%d",sum);
    

    return 0;
}