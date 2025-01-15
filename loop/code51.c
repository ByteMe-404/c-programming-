#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0;
    scanf("%d", &octal);

    for (int base = 0; octal != 0; base++) {
        int remainder;
        remainder = octal % 10; 
        decimal += remainder * pow(8, base);
        octal /= 10; 
    }
    
    printf("%d\n", decimal);

    return 0;
}
