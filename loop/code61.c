#include <stdio.h>

int main() {
    char str[1000];
    int u = 0, l = 0, others = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            u++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            l++;
        } else {
            others++;
        }
    }

    printf("uppercase  %d\n", u);
    printf("lowercase  %d\n", l);
    printf("Other  %d\n", others);

    return 0;
}
