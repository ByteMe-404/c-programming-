#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r, sum = 0;

    scanf("%lf", &a);
    scanf("%lf", &r);
    scanf("%d", &n);
    (r == 1) ? (sum = a * n) : (sum = a * (1 - pow(r, n)) / (1 - r));
    printf("%lf",sum);
    
    return 0;
}
