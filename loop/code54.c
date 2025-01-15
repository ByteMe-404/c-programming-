#include <stdio.h>

int main() {
    int octal, binary = 0, place = 1;
    scanf("%d", &octal);

    for (; octal != 0; octal /= 10) {
        int remainder = octal % 10;
        for (int i = 0; i < 3; i++) {
            binary += (remainder % 2) * place;
            remainder /= 2;
            place *= 10;
        }
    }

    printf("%d\n", binary);
    return 0;
}
