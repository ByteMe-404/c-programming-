#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 1.0, t = 1.0; 
    int n, i, j;

    scanf("%lf %d", &x ,&n);

    for (i = 1; i < n; i++) {
        int e = 2 * i; 
        double fact = 1.0;    
        for (j = 1; j <= e; j++) {
            fact *= j;
        }
        t = pow(x, e) / fact;
        if (i % 2 != 0) {
            t = -t;
        }
        sum += t;
    }

    printf("%.6lf\n", sum); 

    return 0;
}
