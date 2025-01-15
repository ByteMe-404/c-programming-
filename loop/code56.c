#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        int isPrime1 = 1, isPrime2 = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime1 = 0;
                break;
            }
        }

        for (int k = 2; k * k <= (num - i); k++) {
            if ((num - i) % k == 0) {
                isPrime2 = 0;
                break;
            }
        }
        if (isPrime1 && isPrime2) {
            printf("%d can be expressed as the sum of %d and %d.\n", num, i, num - i);
            return 0;
        }
    }
    printf("%d cannot be expressed.\n", num);
    return 0;
}
