#include <stdio.h>

int main() {
    char grade;

    printf("Enter the grade (A, B, C, D, F): ");
    scanf("%c", &grade);

    if (grade == 'A' || grade == 'a') {
        printf("Excellent\n");
    } else if (grade == 'B' || grade == 'b') {
        printf("Good\n");
    } else if (grade == 'C' || grade == 'c') {
        printf("Average\n");
    } else if (grade == 'D' || grade == 'd') {
        printf("Below Average\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Fail\n");
    } else {
        printf("Invalid grade input\n");
    }

    return 0;
}
