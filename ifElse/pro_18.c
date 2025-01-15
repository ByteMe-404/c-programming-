#include <stdio.h>
int main(){

    int first ,second;
    scanf("%d %d",&first,&second);
    if (first<second)
    {
        printf("profit : %d",second-first);
    }else if (first==second)
    {
        printf("no profit and loss.");
    }else{
        printf("loss : %d",first-second)    ;
    }
    
    

    return 0;
}