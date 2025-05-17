#include<stdio.h>

long long int suffix_sum(int arr[], int n, int m, int i) {
    if (i > m) return 0;
    long long int sum = suffix_sum(arr, n, m, i + 1);
    return sum + arr[n - i];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%lld\n", suffix_sum(arr, n, m, 1));
    return 0;
}
