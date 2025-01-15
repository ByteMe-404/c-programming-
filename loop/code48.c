#include <stdio.h>
int main(){

    int range = 200;

    for (int  i = 1; i < range; i++){

        int n = i;
        int sum = 0;
        for (int i = n; i > 0; i/=10)
        {
            int fact = 1;
            for (int j = 1; j <=i%10; j++)
            {
                fact*=j;
            }
            sum+=fact;
        }
        if (n==sum)
        {
            printf("%d ",n);
        }
        
        

    }
    return 0;
}