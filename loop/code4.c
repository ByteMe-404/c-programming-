#include <stdio.h>
int main(){
    int sum  = 0;
    for (int i = 0; i < 10; i++)
    {
        int input;
        scanf("%d",&input);
        sum+=input;
    }


    printf("%d\n",sum);
    printf("%.2f",1.0*sum/10);


    return 0;
}