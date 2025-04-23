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

    int val;
    scanf("%d", &val);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j] == val){
                printf("will not take number");
                return 0;
            }
        }
    }
    printf("will take number");
    return 0;
}