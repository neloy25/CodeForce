#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int mat[n][n];
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
        }

        int x = 2 * n;
        int arr[x];
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i + j + 1] = mat[i][j];
        }
        }

        int sum = 0;
        for (int i = 1; i < x; i++) {
        sum += arr[i];
        }

        arr[0] = ((x * (x + 1)) / 2) - sum;

        for (int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
        }

        printf("\n");
    }
    return 0;
}