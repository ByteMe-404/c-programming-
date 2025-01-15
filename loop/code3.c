#include <stdio.h>
int main(){
    int sum = 0 ;
    int n;
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    printf("%d",sum);


    return 0;
}


