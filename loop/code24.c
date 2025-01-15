#include <stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d",&n);
    int term;
    scanf("%d",&term);
    int sum  = 0;

    for (int i = 1; i <= term; i++)
    {
        int k = pow(n,(i*2)-1);
        if (i%2==1)
        {
            sum +=k;
            printf("%d ",k);    
        }else{
            sum -=k;
            printf("-%d ",k);    

        }
    }
    printf("%d\n",sum);

    return 0;
}


