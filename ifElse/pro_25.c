#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int choice;
    float area, radius, side, length, width, base, height;

    // Menu-driven approach
    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Rectangle\n");
    printf("4. Area of Triangle\n");
    printf("5. Exit\n");
    
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Area of Circle: πr²
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else if (choice == 2) {
        // Area of Square: side²
        printf("Enter side of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The area of the square is: %.2f\n", area);
    } else if (choice == 3) {
        // Area of Rectangle: length * width
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else if (choice == 4) {
        // Area of Triangle: (base * height) / 2
        printf("Enter base of the triangle: ");
        scanf("%f", &base);
        printf("Enter height of the triangle: ");
        scanf("%f", &height);
        area = (base * height) / 2;
        printf("The area of the triangle is: %.2f\n", area);
    } else if (choice == 5) {
        printf("Exiting the program.\n");
    } else {
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}
