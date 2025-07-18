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

        for (int i = 0; i < n -1; i++) {
            if(arr[i] == 1) {
                arr[i]++;
                if(i !=0 && arr[i] % arr[i - 1] == 0){
                    arr[i]++;
                }
            }
            if(arr[i + 1] % arr[i] == 0) arr[i+1]++;
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }
    return 0;
}