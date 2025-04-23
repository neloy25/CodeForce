#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int count = n;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if(arr[j] > arr[j - 1]){
                    count++;
                    for (int k = i; k <= j; k++) { // From Here
                        printf("%d ", arr[k]);
                    }
                    printf("\n");  // Printing all subarray (Not for Problem)
                } else break;
            }
        }
        printf("END %d\n", count);
    }
    return 0;
}