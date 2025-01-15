#include <stdio.h>

int main() {
    int n, prev = 0, curr = 1, next;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", prev); 
        next = prev + curr;
        prev = curr; 
        curr = next;
    }

    return 0;
}
