#include <stdio.h>

int main() {
    int roll_no, physics, chemistry, computer_application, total_marks;
    int percentage;
    char name[50];
    
    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll_no);

    printf("Input the Name of the Student: ");
    scanf("%s", name);  

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer_application);

    total_marks = physics + chemistry + computer_application;
    percentage = total_marks / 3;

    printf("\nRoll No : %d\n", roll_no);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", physics);
    printf("Marks in Chemistry : %d\n", chemistry);
    printf("Marks in Computer Application : %d\n", computer_application);
    printf("Total Marks = %d\n", total_marks);
    printf("Percentage = %d %%\n", percentage);

    if (percentage >= 60) {
        printf("Division = First\n");
    } else if (percentage >= 50) {
        printf("Division = Second\n");
    } else if (percentage >= 40) {
        printf("Division = Third\n");
    } else {
        printf("Division = Fail\n");
    }

    return 0;
}
