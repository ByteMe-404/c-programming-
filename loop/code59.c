#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, count = 0;

    scanf("%d", &num);
    originalNum = num;

    for (int i = num; i != 0; i /= 10) {
        count++;
    }

    for (int i = num; i != 0; i /= 10) {
        remainder = i % 10;
        result += pow(remainder, count);
    }

    if (result == originalNum) {
        printf("Armstrong number.\n");
    } else {
        printf("not  Armstrong number.\n");
    }

    return 0;
}
