#include <stdio.h>
int main(){

    int n1 = 15;
    int n2 = 20;
    int k;
    int lcm  =1 ;
    k = (n1 < n2) ?  n2 : n1;
    for (int i = k;; i+=k)
    {
        if (i%n1==0 && i%n2==0)
        {
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}


