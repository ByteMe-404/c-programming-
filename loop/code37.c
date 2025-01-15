#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = n; i !=0; i/=10)
    {
        printf("%d",i%10);
    }
    


    return 0;
}