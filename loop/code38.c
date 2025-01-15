#include <stdio.h>
int main(){
    int main;
    scanf("%d",&main);
    int rev=0;
    for (int i = main; i!=0; i/=10)
    {
        rev =rev*10  + i%10 ;
    }
    
    if (main==rev)
    {
        printf("palindrome");
    }else{
        printf("not palindrome");

    }
    
    
    return 0;
}