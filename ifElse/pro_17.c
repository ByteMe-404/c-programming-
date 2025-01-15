#include <stdio.h>
int main(){

    char c;
    scanf("%c",&c);
    if (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' )
    {
        printf("this is an vowel.");
    }else{
        printf("this is a consonant");
    }
    

    return 0;
}