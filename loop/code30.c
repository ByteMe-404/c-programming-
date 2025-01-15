#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int r = 1; r <= n; r++) {
        int original = r; 
        int sum = 0;
        int counter = 0;
        for (int i = r; i != 0; i /= 10) {
            counter++;
        }
        for (int i = r; i != 0; i /= 10) {
            int k = i % 10;
            sum += pow(k, counter);
        }
        if (sum == original) {
            printf("%d\n", r); 
        }
    }
    return 0;
}
