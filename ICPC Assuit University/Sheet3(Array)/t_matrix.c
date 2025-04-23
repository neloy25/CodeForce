#include<stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    int arr[m][m];
    int pri = 0;
    int sec = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            if(i == j) pri+= arr[i][j];
            if(i + j == m - 1) sec+= arr[i][j];
        }
    }
    if(pri > sec) printf("%d", pri - sec);
    else  printf("%d", sec - pri);
    return 0;
}