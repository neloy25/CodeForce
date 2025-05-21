#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int count = n;
        for (int i = 1; i <n; i++) {
            for (int j= 0; j < i; j++) {
                if(arr[j] == arr[i]){
                    count--;
                    break;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}