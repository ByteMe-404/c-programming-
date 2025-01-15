#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++){
        length++;
    }

    printf("%d",length);

    return 0;
}
