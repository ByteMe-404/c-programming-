#include <stdio.h>
#include <math.h>
int main(){

    int n ;
    scanf("%d",&n);
    int original;
    original = n;
    int sum = 0;

    int counter = 0;
    for (int i = n; i !=0; i/=10)
    {
        counter++;
    }


   for (int i =n; i!=0; i/=10)
   {
        int k;
        k=i%10;

        sum+=pow(k,counter);
   }
    


    
    if (sum==original)
    {
        printf("armastrong");
    }else{
        printf("not armstrong");
    }

    return 0;
}