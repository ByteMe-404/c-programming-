#include <stdio.h>
int main(){

    int n =6;
    // scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c ",j+'A');
        }
        
        for (int j = i-2; j >= 0; j--)
        {
            printf("%c ",j+'A');
        }
        printf("\n");
        
    }
    


    return 0;
}