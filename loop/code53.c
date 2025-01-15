#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, octal = 0;
    int power = 0;

    scanf("%lld", &binary);

    for (long long temp = binary; temp != 0; temp /= 10) {
        decimal += (temp % 10) * pow(2, power);
         power++;
    }

    power = 1;

    for (int temp = decimal; temp != 0; temp /= 8) {
        octal += (temp % 8) * power;
        power *= 10;
    }

    printf("%d\n", octal);

    return 0;
}
