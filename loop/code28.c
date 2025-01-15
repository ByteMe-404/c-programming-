#include <stdio.h>
int main(){
    
    int n ;
    scanf("%d",&n);

    for (int j = 1; j <= n; j++)
    {

    
    int sum = 0;
    for (int i = 1; i <= j/2; i++)
    {
        if (j%i==0)
        {
            sum+=i;
        }        
    }
    if (j==sum)
    {
        printf("%d ",j);
    }
    


}
    return 0;
}