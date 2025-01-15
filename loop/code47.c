#include <stdio.h>
int main(){
    int n = 145;
    int sum = 0;
    for (int i = n; i > 0; i/=10){
        int fact =1 ;
        for (int j = 1; j<=i%10 ; j++)
        {
            fact*=j;
        }
        sum+=fact;
    }
    
    printf("%d",sum);

    if (n==sum)
    {
        printf("strong");
    }else{
        printf("not strong");
    }
    



    return 0;
}