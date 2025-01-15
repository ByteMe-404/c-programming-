#include <stdio.h>
int main(){

    int n1 = 24;
    int n2 = 28;
    int k;
    int hcf  =1 ;
    k = (n1 < n2) ?  n1 : n2;
    for (int i = 1; i <= k ; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
        
    }
    printf("%d",hcf);
    
    return 0;
}






