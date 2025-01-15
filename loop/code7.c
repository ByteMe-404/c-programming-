#include <stdio.h>
int main(){
    int n ;
     scanf("%d",&n);

    for (int j = 1; j < 11; j++)
    {

        for (int i = 1; i <= n; i++)
        {
            printf("%d x %d = %d ,",i,j,j*i);
        }
            
     printf("\n");   
    }


    return 0;
}