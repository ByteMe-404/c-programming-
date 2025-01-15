#include <stdio.h>
int main(){
    int sum = 0;
    for (int i = 100; i < 201; i++)
    {
        if (i%9==0)
        {
            printf("%d ",i);
            sum+=i;

        }
        
    }
    printf("\n%d",sum);
    


    return 0;
}