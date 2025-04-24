#include<stdio.h>

int main() {
    int m , n;
    scanf("%d%d", &m,&n);
    int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        int left = 0;
        int right = n - 1;
        while(left < right){
            arr[i][left] += arr[i][right];
            arr[i][right] = arr[i][left] - arr[i][right];
            arr[i][left] -= arr[i][right];
            left++;
            right--; 
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}