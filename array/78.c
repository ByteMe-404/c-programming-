#include <stdio.h>


void solve(int *arr1, int size, int SUM) {
    for (int i = 0; i < size - 3; i++) {
        for (int j = i + 1; j < size - 2; j++) {
            for (int k = j + 1; k < size - 1; k++) {
                for (int l = k + 1; l < size; l++) {
                    if (arr1[i] + arr1[j] + arr1[k] + arr1[l] == SUM) {
                        printf("%d, %d, %d, %d\n", arr1[i], arr1[j], arr1[k], arr1[l]);
                        return;
                    }
                }
            }
        }
    }
}


int main(){
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);

int n;
scanf("%d",&n);
int arr[n];
int target = 37;
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

solve(arr,n,target);



return 0;
}