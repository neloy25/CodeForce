#include<stdio.h>

void swap(int* x,int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int n,x,y;
    scanf("%d%d%d", &n,&x,&y);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        swap(&arr[x - 1][i],&arr[y - 1][i]);
    }

    for (int i = 0; i < n; i++) {
        swap(&arr[i][x - 1],&arr[i][y - 1]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}