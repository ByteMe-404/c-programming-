#include <stdio.h>
int main(){

    int n ;
    scanf("%d",&n);
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);

        }
        
        printf("\n");
    }
    


    return 0;
}