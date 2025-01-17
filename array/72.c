#include <stdio.h>

int rowcompare(int arr[], int arr2[], int n) {
    // Compare two rows element by element
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr2[i]) {
            return 0;  // Rows are not identical
        }
    }
    return 1;  // Rows are identical
}

int main() {
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int seen[m];  // This array keeps track of whether a row has already been printed

    // Initialize the 'seen' array to 0 (row not seen)
    for (int i = 0; i < m; i++) {
        seen[i] = 0;
    }

    // Read the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print unique rows (rows not seen before)
    for (int i = 0; i < m; i++) {
        if (seen[i] == 0) {  // If this row hasn't been printed yet
            // Print the row
            for (int j = 0; j < n; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");

            // Mark this row as seen
            seen[i] = 1;

            // Compare this row with all subsequent rows to check for duplicates
            for (int j = i + 1; j < m; j++) {
                if (rowcompare(matrix[i], matrix[j], n)) {
                    seen[j] = 1;  // Mark row[j] as seen (duplicate)
                }
            }
        }
    }

    return 0;
}
