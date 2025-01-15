#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int sum =  0;
    int series = 0;
    for (int i = 0; i < n; i++)
    {
        series=series*10 +1;
        printf("%d ",series);
        sum+=series;
    }
    
    printf("\n%d",sum);

    return 0;
}