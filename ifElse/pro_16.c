#include <stdio.h>
#include <ctype.h>

int main(){

    char c;
    scanf("%c",&c);
    if (c >='a' && c <='z' || c>='A' &&c<='Z' )
    {
        printf("this is a alphabet .");
    }
    else if (c >='0' && c<='9')    
    {
        printf("this is a digit ");
    }else{
        printf("this is a special character " );
    }
    
    


    return 0;
}