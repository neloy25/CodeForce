#include<stdio.h>
#include<limits.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int sum = 0;
            for (int j = i + 1; j < n; j++) {
                sum = arr[i] + arr[j] + j - i;
                if(sum < min) min = sum;
            }
        }
        printf("%d\n", min);
        }

    return 0;
}