#include <stdio.h>
#include <limits.h> // For INT_MAX

int minJumps(int arr[], int n) {
    if (n <= 1) {
        return 0; // If the array has one or no elements, no jumps are needed
    }
    if (arr[0] == 0) {
        return -1; // If the first element is 0, it's not possible to move
    }

    int maxReach = arr[0]; // The farthest we can reach
    int steps = arr[0];    // Steps we can still take
    int jumps = 1;         // At least one jump is needed to start

    for (int i = 1; i < n; i++) {
        // Check if we've reached the end of the array
        if (i == n - 1) {
            return jumps;
        }

        // Update the farthest reach
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;

        // Use a step to move to the current index
        steps--;

        // If no more steps are left
        if (steps == 0) {
            jumps++; // Increase the jump count

            // If the current index is beyond the maximum reach, we cannot move further
            if (i >= maxReach) {
                return -1;
            }

            // Reinitialize steps for the new jump
            steps = maxReach - i;
        }
    }

    return -1; // If the loop ends without reaching the last index
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = minJumps(arr, n);

    if (result == -1) {
        printf("It's not possible to reach the end of the array.\n");
    } else {
        printf("The minimum number of jumps to reach the end of the array is: %d\n", result);
    }

    return 0;
}
