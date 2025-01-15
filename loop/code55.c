#include <stdio.h>

int main() {
    int decimal;
    scanf("%d", &decimal);

    for (int i = decimal; i > 0; i /= 16) {
        int remainder = i % 16;
        if (remainder < 10) {
            printf("%c", remainder + '0');
        } else {
            printf("%c", remainder - 10 + 'A');
        }
    }
    printf("\n");

    return 0;
}
