#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int check[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &check[i]);
    }

    int k = 0;
    for (int i = 0; i < m; i++) {
        int find = 0;
        for(int j = k; j < n; j++){
            if(arr[j] == check[i]){
                k = j + 1;
                find = 1;
                break;
            }
        }
        if(!find){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}