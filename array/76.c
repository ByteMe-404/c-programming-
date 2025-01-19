/*
Author    : Rian
Created on: 2025-01-17    
      time: 15:52:23
:)

█████╗
██╔══██ 
██║  ╚═╝
██║  ██╗
╚█████╔╝
╚════
*/

#include <stdio.h>
#include <string.h>

void sort(char arr[][10], int n) {
    char temp[10];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((int)arr[i][0] < (int)arr[j][0]  ) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    
    int n;
    scanf("%d", &n);
    char arr[n][10];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s", arr[i]);
    }

    return 0;
}
