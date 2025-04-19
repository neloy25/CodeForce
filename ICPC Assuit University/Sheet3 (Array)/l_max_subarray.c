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

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        
        for(int i = 0; i < n - 1;i++){
            int max = arr[i];
            for(int j = i + 1; j < n; j++){
                if(arr[j] > max) max = arr[j];
                printf("%d ",max);
            }
        }
        printf("\n");
    }
    return 0;
}