#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0;
    scanf("%d", &binary);

    for (int base = 0; binary != 0; base++) {
        int remainder;
        remainder = binary % 10; 
        decimal += remainder * pow(2, base);
        binary /= 10; 
    }
    
    printf("%d\n", decimal);

    return 0;
}
